class Solution {
public:
    vector<int> sortedSquares(vector<int>& res) {

        int n = res.size();
        vector<int>a;
        vector<int>b;

      for(int i=0;i<n;i++)
      {
        if(res[i]>=0)
        {
            b.push_back(res[i]);
        }

        else
        a.push_back(res[i]);
      }



      // isko comment karne ka ye reason hai ki jisme negative positive dono ho usko ye nhi kar paa rha 

    //   if(a.size()==0)
    //   {
    //     for(int i=0;i<n;i++)
    //     b[i] = b[i] * b[i];
    //   }

    //   if(b.size()==0)
    //   {
    //     for(int i=0;i<n;i++)
    //     a[i] = a[i] * a[i];
    //     reverse(a.begin(),a.end());
    //   }


    for(int i=0; i<a.size(); i++)
{
    a[i] = a[i] * a[i];
}

reverse(a.begin(), a.end());

for(int i=0; i<b.size(); i++)
{
    b[i] = b[i] * b[i];
}
       

       // ISS STEP ME MERGE KAR RAHE HAI AUR JO ELEMENT BACH GYA USKO RES ME DAAL RHE HAI

    int i = 0;
    int j = 0;
    int id = 0;
    while(i<a.size() && j<b.size())
    {
        if(a[i] < b[j])
        {
           // while(i < a.size())

            res[id] = a[i];
          //  id++;
            i++;
        }
        else
        {
            res[id] = b[j];
         //   id++;
            j++;
        }
        id++;
    }
while(i < a.size())
{
    res[id] = a[i];
    id++;
    i++;
}
   while(j < b.size())
{
    res[id] = b[j];
    id++;
    j++;
}

      return res;
        
    }
};