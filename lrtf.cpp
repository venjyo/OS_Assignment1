/* Below is the code for Priority Scheduling */

    

    #include<iostream>
    #include<conio.h>
using namespace std;
    int main()
    {
            int i,j,Wt[10],B[10],A[10],Tt=0,temp,n,Bu[10],Pr[10];
            char S[20];
            float Twt=0.0,Awt;
            cout<<"Enter the number of student";
            cin>>n;
            for(i=1;i<=n;i++)
    {
            cout<<"Student P"<<i<<" ";
            cin>>Bu[i];
    }
            for(i=1;i<=n;i++)
    {
            B[i]=Bu[i];
            Wt[i]=0;
            S[i]='T';
            Tt=Tt+B[i];
            cout<<"\n Enter the arrival time for "<<i<<"th Student ";
            cin>>A[i];
    }
            for(i=1;i<=n;i++)
    {
            cout<<"Enter the priority for Student P"<<i<<" ";
            cin>>Pr[i];
    }
            int flag=0,t=0;
            temp=i=1;
            while(t<Tt)
    {
            cout<<"\n"<<B[i]<<"\t"<<i;
            if(temp!=i)
    {
            Wt[i]=t-(Bu[i]-B[i]);
            temp=i;
    }
            B[i]=B[i]-1;
            if(B[i]==0)
            S[i]='F';
            t=t+1;
            if(S[i]!='F')
    {
            j=1;
            while(j<=n)
    {
            if(S[j]!='F' && A[j]<=t && i!=j &&Pr[j]==i)
    {
            i=j;
    }
            else
            j++;
    }
    }
            else
    {
            i++;
            if(i>n)
            i=1;
    }
    }
            for(i=1;i<=n;i++)
    {
            cout<<"\nWaiting time for Student P "<<i<<" ="<<(Wt[i]-A[i]);
            Twt+=(Wt[i]-A[i]);
    }
            Awt=Twt/n;
            cout<<"\n The average waiting time is "<<Awt;
            getche();
    }

