using System;

namespace DesignPatterns
{
    internal class KnifeStore
    {
        //require a knife factory object to be passed to this constructor
        private KnifeFactory factory;

        public KnifeStore(KnifeFactory factory)
        {
            this.factory = factory;
        }

        internal Knife OrderKnife(string knifeType)
        {
            //use the create method in the factory
            Knife knife = factory.CreateKnife(knifeType);
            //Prepare the Knife
            knife.Sharpen();
            knife.Polish();
            knife.Package();
            return knife;
        }
    }
}