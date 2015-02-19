(function($) {
    "use strict";
    $(document).ready(function() {
        $('#edit-credit-card-number').
            addClass('error').
            keydown(checkCreditCard).
            change(checkCreditCard);
    });

    function checkCreditCard() {
        var el = this,
            isValidSyntax = false;

        isValidSyntax = Mod10(el.value);

        if (isValidSyntax) {
            $.get('index.php?q=my-credit-card/validate/' + el.value, { }, function () {
                $(el).removeClass('error');
                $('#edit-submit').removeAttr('disabled');
            });
        }
        else {
            $(el).addClass('error');
            $('#edit-submit').attr('disabled', 'disabled');
        }
    }

    function Mod10(ccNumb) { //v2.0
        var valid 	= "0123456789"
        var len 	= ccNumb.length;
        var bNum 	= true;
        var iCCN 	= ccNumb;
        var sCCN 	= ccNumb.toString();
        var iCCN;
        var iTotal 	= 0;
        var bResult = false;
        var digit;
        var temp, calc, calc2;
        iCCN = sCCN.replace (/^\s+|\s+$/g,'');	// strip spaces

        for (var j=0; j<len; j++) {
            temp = "" + iCCN.substring(j, j+1);
            if (valid.indexOf(temp) == "-1") {
                bNum = false;
            }
        }
        iCCN = parseInt(iCCN);

        if(len == 0){ /* nothing, field is blank */
            return false;
        }

        if(len < 15) {		//15 or 16 for Amex or V/MC
            return false;
        }

        for(var i=len;i>0;i--){
            digit = "digit" + i;
            //alert(digit);

            calc = parseInt(iCCN) % 10;	//right most digit
            calc = parseInt(calc);
            //alert(calc);
            iTotal += calc;		//parseInt(cardnum.charAt(count))i:\t" + calc.toString() + " x 2 = " + (calc *2) +" : " + calc2 + "\n";
            // commented out below which wrote NONALTERED digit to page for demo only.
            //document.form1.textfield.value += "" + i + ":\t" + calc.toString() + " x 1 = " + calc + "\n";

            i--;
            digit = "digit" + i;
            //alert(digit);

            iCCN = iCCN / 10; 	// subtracts right most digit from ccNum
            calc = parseInt(iCCN) % 10 ;	// step 1 double every other digit
            //alert( iCCN + " " + calc);
            calc2 = calc *2;

            switch(calc2){
                case 10: calc2 = 1; break;	//5*2=10 & 1+0 = 1
                case 12: calc2 = 3; break;	//6*2=12 & 1+2 = 3
                case 14: calc2 = 5; break;	//7*2=14 & 1+4 = 5
                case 16: calc2 = 7; break;	//8*2=16 & 1+6 = 7
                case 18: calc2 = 9; break;	//9*2=18 & 1+8 = 9
                default: calc2 = calc2; 		//4*2= 8 &   8 = 8  -same for all lower numbers
            }
            iCCN = iCCN / 10; 	// subtracts right most digit from ccNum
            iTotal += calc2;
            // commented out below which wrote MULTIPLIED digit to page for demo only
            //document.form1.textfield.value += "" + i +":\t" + calc.toString() + " x 2 = " + (calc *2) +" : " + calc2 + "\n";
        }

        if ((iTotal%10)!==0){
            console.log('Mod10: does not pass mod 10');
            return false
        }

        return true;
    }

})(jQuery);
