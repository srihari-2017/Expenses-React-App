using System;

namespace DesignPatterns
{
    internal class KnifeFactory
    {
        public Knife CreateKnife(String knifeType)
        {
            Knife knife = null;

            // Create Knife Object - Concrete instantiation     
            if (knifeType == "chef")
            {
                knife = new ChefKnife();
            }
            else if (knifeType == "steak")
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

            return knife;
        }
        
    }
}