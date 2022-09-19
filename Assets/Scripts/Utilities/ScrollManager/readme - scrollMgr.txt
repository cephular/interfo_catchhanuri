[소스 파일 위치]
Scripts > Scene_02_Test 폴더
  ScrollMgr.cs
  ScrollCouponItem.cs

[방법]
  - Hierarchy 에서 마우스 우클릭, UI > Scroll View 클릭하여 Hierarchy에 Scroll View 객체 추가
  - ScrollView > Viewport > Content 객체에 "ScrollMgr" 컴포넌트 추가

  
< ScrollMgr.cs >
스크롤 아이템의 추가
  - void ScrollMgr.Instance.AddScrollItem(
        string url_logo, string url_thumnail, CouponType couponType,
        string strCouponName, string strPeriod, bool isUsedCoupon, int cidx)

스크롤 아이템 전부 제거
  - void ClearContents()
 
스크롤 아이템 참조 및 수정
  - ScrollCouponItem ScrollMgr.Instance[cidx] 인덱서
    - ScrollMgr.Instance[cidx] = value