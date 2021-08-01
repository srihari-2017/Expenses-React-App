using System;

namespace DesignPatterns
{
    public abstract class KnifeStore
    { 
        public Knife OrderKnife(string knifeType)
        {
            Knife knife;
            
            //use the create method in the factory
            knife = CreateKnife(knifeType);
            
            //Prepare the Knife
            knife.Sharpen();
            knife.Polish();
            knife.Package();
            return knife;
        }

        public abstract Knife CreateKnife(String knifeType);
    }
}