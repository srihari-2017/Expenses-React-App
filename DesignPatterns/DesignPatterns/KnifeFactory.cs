using System;

namespace DesignPatterns
{
    internal class KnifeFactory
    {
        internal Knife OrderKnife(string knifeType)
        {
            Knife knife = null;

            // Create Knife Object - Concrete instantiation     
            if(knifeType == "chef")
            {
                knife = new ChefKnife();
            }
            else if(knifeType == "steak")
            {
                knife = new SteakKnif();
            }
            else if (knifeType == "bread")
            {
                knife = new BreadKnif();
            }
            else if (knifeType == "paring")
            {
                knife = new ParingKnif();
            }

            //Prepare the Knife
            knife.Sharpen();
            knife.Polish();
            knife.Package();
            return knife;
            
        }
    }
}