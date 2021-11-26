let firstList = [[0,2],[5,10],[13,23],[24,25]], secondList = [[1,5],[8,12],[15,24],[25,26]];
var intervalIntersection = function(firstList, secondList) {
    let isValid  = firstList.length>=0 && secondList.length<=1000 && (firstList.length+secondList.length>=1)
    let tempArr =[];
    if(isValid){
        Array.from({length: firstList.length}, (_, i) => 
        {
            if((i<(firstList.length-1)&&firstList[i+1][0]>firstList[i][1]) || i>=firstList.length-1){
                let fValue = firstList[i];
                Array.from({length: secondList.length}, (_, j) => {
                    if(j<(secondList.length-1)&&secondList[j+1][0]>secondList[j][1] ||  j>=secondList.length-1){                       
                        let sValue = secondList[j];
                        getInterval(fValue,sValue)!=undefined && tempArr.push(getInterval(fValue,sValue))
                    }
                }) 

            }
        })
        return tempArr
        }  
    else{
        return [];
    }
};
const getInterval = (firstArr,secondArr) =>{
    let [s1,e1] = firstArr;
    let [s2,e2] = secondArr;
    if(!(s1<0 || s2<0 || e1<=s1 || e2<=s2 || e1>10**9 || e2>10**9)){
        if(e1<s2 || s1>e2) return;
        if(s1===e2) return [s1,e2];
        else {
            return [Math.max(s1,s2),Math.min(e1,e2)]
        }
    }
}
let y =intervalIntersection(firstList,secondList);
