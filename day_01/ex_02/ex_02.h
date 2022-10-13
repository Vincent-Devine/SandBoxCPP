namespace day_01::ex_02
{
    namespace box
    {
        int nb_little_boxes = 0;

        namespace little_box
        {
            int nb_little_boxes = 0;
            int candies = 0;
        }

        struct other_box
        {
            int candy = 0;
            int nb_little_boxes = 0;
            
            enum candies
            {
                ORANGE,
                STRAWBERRY,
            };
        };
    }
}
