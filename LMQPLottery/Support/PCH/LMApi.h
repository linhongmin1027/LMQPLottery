// 请求地址
#define SERVER_HOST @"https://api.tqzwb.com/"
#define SERVERHOSTS @[@"https://api.tqzwb.com",@"https://data.qpcp.com"] //正式 测试


#define Api_secretKey1 @"1197a038d"
#define Api_secretKey2 @"d3bc98e045bc0e"
#define Api_secretKey3 @"57a4c2f84"
#define Api_Key1    @"ba4be68e51f1"
#define Api_Key2    @"2e2cb5332290"
#define Api_Key3    @"0a52f2b1"





/*
 首页接口
 */
#define Home_Api @"/index.php/api/Index/index"//首页全部信息
#define Home_AppVersion @"/index.php/api/AppVersion"//获取app版本


/*
 购彩大厅
 */
#define Lottery_List @"/index.php/api/Lottery/lotteryList"//获取购彩大厅数据
#define Lottery_Detail @"/index.php/api/lottery/detail"//获取投注界面详情
#define Lottery_Order_Bet @"/index.php/api/Order/bet"//投注
#define Lottery_Data_Last @"/index.php/api/lotteryData/last"//获取最新开奖结果


/*
 投注列表
 */
#define Lottery_All @"/index.php/api/Lottery/all"//获取所有彩种
/*
 开奖信息
 */
#define LotteryInfo_list @"/index.php/api/lottery/notice" //开奖信息列表
#define LotteryInfo_Single_list @"/index.php/api/LotteryData/history" //开奖历史


/*
 我的
 */
#define My_Profile @"/index.php/api/Member/appProfile"//我的资料
#define My_Order @"/index.php/api/order"//我的订单
#define My_Order_Detail   @"/index.php/api/Order/detail"
#define My_Order_Cancel @"/index.php/api/Order/cancel"//撤单
