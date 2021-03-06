//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

#import "WBLiveRoomModelProtocol-Protocol.h"
#import "WBSharingObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, WBNLShareInfoModel, WBNLUserInfoModel, WBTBLiveShareInfo, WBTimelinePageInfo, WBTimelineURL, YXCovers, YXMicStatusModel, YXWeiboInfo;
@protocol YXLCellWidget><Optional;

@interface YXLiveModel : WBNLBaseModel <WBSharingObject, WBLiveRoomModelProtocol>
{
    NSString *_cellName;
    _Bool isSchemeLink;
    _Bool _hasTrueLoveGroup;
    _Bool _inTrueLoveGroup;
    _Bool _fans_expiry;
    _Bool _isFromeLiveRoom;
    _Bool _isDeleteState;
    _Bool _hasFansGroup;
    _Bool _isJoinedFansGroup;
    _Bool _can_linkmic;
    _Bool _ktv_switch;
    _Bool _is_premium;
    _Bool _wb_is_subscribe;
    _Bool _pk_enabled;
    _Bool _pk_random_enable;
    _Bool _pk_activity_enable;
    _Bool _pk_pandantPK_enable;
    _Bool _allow_random_pk;
    _Bool _allow_friend;
    _Bool _allow_stranger;
    _Bool _scoreboard_mode;
    _Bool _isTopPK;
    _Bool _is_fusing;
    int _msgFrom;
    int _friendsLiveType;
    long long liveRoomType;
    NSString *liveRoomId;
    NSString *schemeLink;
    NSDictionary *schemeParams;
    NSString *coverUrl;
    NSString *_live_type;
    NSString *_eventid;
    NSString *_container_id;
    long long _verified_type;
    WBNLShareInfoModel *_share_info;
    WBTBLiveShareInfo *_wbtblShareInfo;
    WBNLUserInfoModel *_owner_info;
    NSString *_cover_path;
    NSString *_wb_ownerid;
    NSString *_wb_liveid;
    NSString *_wb_status;
    NSString *_avatar;
    NSString *_nickname;
    NSString *_liveid;
    NSString *_memberid;
    long long _carousel_isfocus;
    NSString *_carousel_memberid;
    NSString *_carousel_owner_openid;
    NSString *_tags;
    NSString *_desc;
    YXCovers *_covers;
    NSString *_cover;
    NSString *_rtmpurl;
    NSString *_flvurl;
    NSString *_playurl;
    NSString *_playurl_hevc;
    NSString *_linkurl;
    NSString *_m3u8url;
    long long _m3u8segnum;
    double _liveduration;
    double _duration;
    double _lon;
    double _lat;
    long long _status;
    NSNumber *_updatetime;
    NSString *_createip;
    NSNumber *_createtime;
    long long _liveId;
    NSString *_topicid;
    NSString *_scid;
    long long _type;
    NSString *_address;
    long long _filesize;
    long long _isfocus;
    NSString *_follow_txt;
    NSString *_carousel_cover;
    NSString *_carousel_scid;
    long long _iscontrol;
    NSDictionary *_group;
    NSString *_trueLoveGroupName;
    long long _trueLoveGroupLevel;
    long long _praise_count;
    long long _comment_count;
    NSNumber *_comment_time;
    NSNumber *_praise_time;
    NSString *_comment_content;
    double _liveHeight;
    long long _has_praise;
    long long _looks;
    NSString *_title;
    long long _views;
    long long _online;
    long long _live_total;
    NSNumber *_videorate;
    NSNumber *_videogop;
    NSNumber *_videofps;
    NSNumber *_videowidth;
    NSNumber *_videoheight;
    YXWeiboInfo *_weibo;
    NSString *_wmid;
    long long _ytypevt;
    NSString *_yzb_nickname;
    long long _show_buygoods_button;
    NSString *_ytypename;
    NSString *_waterurl;
    long long _waterposx;
    long long _waterposy;
    long long _height;
    long long _width;
    long long _livetype;
    long long _show_watermark;
    id _watermark_logo;
    NSString *_distance;
    NSString *_watermark_text;
    NSNumber *_KSYVideoMinBitrate;
    NSNumber *_KSYVideoMaxBitrate;
    NSNumber *_KSYVideoInitBitrate;
    NSNumber *_KSYMaxKeyInterval;
    NSNumber *_KSYAudiokBPS;
    double _cellHeight;
    long long _with_product;
    NSDictionary *_product;
    NSDictionary *_explain_product;
    NSDictionary *_pk_level_info;
    NSString *_product_link;
    long long _showtype;
    long long _pay_live_status;
    NSString *_enumber;
    long long _isenumber;
    NSString *_msg_linkmic;
    YXMicStatusModel *_all_micstatus;
    long long _is_purchased;
    long long _can_preview;
    NSString *_yzb_remain_seconds;
    NSString *_yzb_free_watch_seconds;
    NSString *_live_price;
    NSDictionary *_anchor_level_info;
    NSString *_taobaoLiveId;
    NSString *_taobaoTopicId;
    NSString *_taobaoRoomId;
    NSArray<YXLCellWidget><Optional> *_ads;
    NSString *_source;
    long long _play_type;
    NSString *_tag;
    double _start_time;
    double _end_time;
    NSString *_course_status;
    long long _course_stage;
    NSString *_course_id;
    NSString *_course_title;
    NSString *_course_tag;
    NSString *_course_summary;
    NSString *_price;
    NSString *_remain_seconds;
    NSString *_free_watch_seconds;
    long long _is_paid;
    long long _pay_status;
    long long _pay_status_pkg;
    long long _is_paid_pkg;
    NSString *_real_fee_pkg;
    long long _paid_active_statrtime;
    long long _paid_active_endtime;
    NSString *_buy_note;
    NSString *_str_price;
    NSString *_str_pkg_buy_time;
    NSString *_str_pkg_remain_time;
    NSString *_rtmp_key;
    NSString *_play_url;
    NSString *_room_icon;
    NSString *_room_name;
    NSString *_lmstarttime;
    double _wb_remain_seconds;
    NSString *_hints;
    NSString *_view_title;
    NSString *_view_operate_title;
    NSString *_view_operate;
    NSString *_jump_url;
    long long _pay_live_vip_type;
    NSString *_scheme_url;
    long long _week_consume_style;
    NSString *_pk_pandantPKCover;
    NSString *_pk_pandantPKSeasonId;
    NSString *_pk_pandantPredictionUrl;
    NSString *_pk_pandantDetailUrl;
    NSString *_pk_icon;
    long long _pk_scorce;
    NSString *_pkRankSeasonTitle;
    NSString *_pkRankSeasonImage;
    NSString *_pkRankSeasonUrl;
    NSDictionary *_top_pk_info;
    NSDictionary *_activity_pk_info;
}

+ (id)arrayOfModelsFromDictionaries:(id)arg1;
+ (id)arrayOfModelsFromDictionaries:(id)arg1 error:(id *)arg2;
+ (id)keyMapper;
+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) _Bool is_fusing; // @synthesize is_fusing=_is_fusing;
@property(retain, nonatomic) NSDictionary *activity_pk_info; // @synthesize activity_pk_info=_activity_pk_info;
@property(retain, nonatomic) NSDictionary *top_pk_info; // @synthesize top_pk_info=_top_pk_info;
@property(copy, nonatomic) NSString *pkRankSeasonUrl; // @synthesize pkRankSeasonUrl=_pkRankSeasonUrl;
@property(copy, nonatomic) NSString *pkRankSeasonImage; // @synthesize pkRankSeasonImage=_pkRankSeasonImage;
@property(copy, nonatomic) NSString *pkRankSeasonTitle; // @synthesize pkRankSeasonTitle=_pkRankSeasonTitle;
@property(nonatomic) long long pk_scorce; // @synthesize pk_scorce=_pk_scorce;
@property(retain, nonatomic) NSString *pk_icon; // @synthesize pk_icon=_pk_icon;
@property(nonatomic) _Bool isTopPK; // @synthesize isTopPK=_isTopPK;
@property(nonatomic) _Bool scoreboard_mode; // @synthesize scoreboard_mode=_scoreboard_mode;
@property(nonatomic) _Bool allow_stranger; // @synthesize allow_stranger=_allow_stranger;
@property(nonatomic) _Bool allow_friend; // @synthesize allow_friend=_allow_friend;
@property(nonatomic) _Bool allow_random_pk; // @synthesize allow_random_pk=_allow_random_pk;
@property(copy, nonatomic) NSString *pk_pandantDetailUrl; // @synthesize pk_pandantDetailUrl=_pk_pandantDetailUrl;
@property(copy, nonatomic) NSString *pk_pandantPredictionUrl; // @synthesize pk_pandantPredictionUrl=_pk_pandantPredictionUrl;
@property(copy, nonatomic) NSString *pk_pandantPKSeasonId; // @synthesize pk_pandantPKSeasonId=_pk_pandantPKSeasonId;
@property(copy, nonatomic) NSString *pk_pandantPKCover; // @synthesize pk_pandantPKCover=_pk_pandantPKCover;
@property(nonatomic) _Bool pk_pandantPK_enable; // @synthesize pk_pandantPK_enable=_pk_pandantPK_enable;
@property(nonatomic) _Bool pk_activity_enable; // @synthesize pk_activity_enable=_pk_activity_enable;
@property(nonatomic) _Bool pk_random_enable; // @synthesize pk_random_enable=_pk_random_enable;
@property(nonatomic) _Bool pk_enabled; // @synthesize pk_enabled=_pk_enabled;
@property(nonatomic) long long week_consume_style; // @synthesize week_consume_style=_week_consume_style;
@property(copy, nonatomic) NSString *scheme_url; // @synthesize scheme_url=_scheme_url;
@property(nonatomic) long long pay_live_vip_type; // @synthesize pay_live_vip_type=_pay_live_vip_type;
@property(copy, nonatomic) NSString *jump_url; // @synthesize jump_url=_jump_url;
@property(copy, nonatomic) NSString *view_operate; // @synthesize view_operate=_view_operate;
@property(copy, nonatomic) NSString *view_operate_title; // @synthesize view_operate_title=_view_operate_title;
@property(copy, nonatomic) NSString *view_title; // @synthesize view_title=_view_title;
@property(copy, nonatomic) NSString *hints; // @synthesize hints=_hints;
@property(nonatomic) _Bool wb_is_subscribe; // @synthesize wb_is_subscribe=_wb_is_subscribe;
@property(nonatomic) _Bool is_premium; // @synthesize is_premium=_is_premium;
@property(nonatomic) double wb_remain_seconds; // @synthesize wb_remain_seconds=_wb_remain_seconds;
@property(retain, nonatomic) NSString *lmstarttime; // @synthesize lmstarttime=_lmstarttime;
@property(retain, nonatomic) NSString *room_name; // @synthesize room_name=_room_name;
@property(retain, nonatomic) NSString *room_icon; // @synthesize room_icon=_room_icon;
@property(retain, nonatomic) NSString *play_url; // @synthesize play_url=_play_url;
@property(copy, nonatomic) NSString *rtmp_key; // @synthesize rtmp_key=_rtmp_key;
@property(copy, nonatomic) NSString *str_pkg_remain_time; // @synthesize str_pkg_remain_time=_str_pkg_remain_time;
@property(copy, nonatomic) NSString *str_pkg_buy_time; // @synthesize str_pkg_buy_time=_str_pkg_buy_time;
@property(copy, nonatomic) NSString *str_price; // @synthesize str_price=_str_price;
@property(copy, nonatomic) NSString *buy_note; // @synthesize buy_note=_buy_note;
@property(nonatomic) long long paid_active_endtime; // @synthesize paid_active_endtime=_paid_active_endtime;
@property(nonatomic) long long paid_active_statrtime; // @synthesize paid_active_statrtime=_paid_active_statrtime;
@property(copy, nonatomic) NSString *real_fee_pkg; // @synthesize real_fee_pkg=_real_fee_pkg;
@property(nonatomic) long long is_paid_pkg; // @synthesize is_paid_pkg=_is_paid_pkg;
@property(nonatomic) long long pay_status_pkg; // @synthesize pay_status_pkg=_pay_status_pkg;
@property(nonatomic) long long pay_status; // @synthesize pay_status=_pay_status;
@property(nonatomic) long long is_paid; // @synthesize is_paid=_is_paid;
@property(copy, nonatomic) NSString *free_watch_seconds; // @synthesize free_watch_seconds=_free_watch_seconds;
@property(copy, nonatomic) NSString *remain_seconds; // @synthesize remain_seconds=_remain_seconds;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *course_summary; // @synthesize course_summary=_course_summary;
@property(copy, nonatomic) NSString *course_tag; // @synthesize course_tag=_course_tag;
@property(copy, nonatomic) NSString *course_title; // @synthesize course_title=_course_title;
@property(copy, nonatomic) NSString *course_id; // @synthesize course_id=_course_id;
@property(nonatomic) long long course_stage; // @synthesize course_stage=_course_stage;
@property(copy, nonatomic) NSString *course_status; // @synthesize course_status=_course_status;
@property(nonatomic) double end_time; // @synthesize end_time=_end_time;
@property(nonatomic) double start_time; // @synthesize start_time=_start_time;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) long long play_type; // @synthesize play_type=_play_type;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray<YXLCellWidget><Optional> *ads; // @synthesize ads=_ads;
@property(copy, nonatomic) NSString *taobaoRoomId; // @synthesize taobaoRoomId=_taobaoRoomId;
@property(copy, nonatomic) NSString *taobaoTopicId; // @synthesize taobaoTopicId=_taobaoTopicId;
@property(copy, nonatomic) NSString *taobaoLiveId; // @synthesize taobaoLiveId=_taobaoLiveId;
@property(retain, nonatomic) NSDictionary *anchor_level_info; // @synthesize anchor_level_info=_anchor_level_info;
@property(copy, nonatomic) NSString *live_price; // @synthesize live_price=_live_price;
@property(copy, nonatomic) NSString *yzb_free_watch_seconds; // @synthesize yzb_free_watch_seconds=_yzb_free_watch_seconds;
@property(copy, nonatomic) NSString *yzb_remain_seconds; // @synthesize yzb_remain_seconds=_yzb_remain_seconds;
@property(nonatomic) long long can_preview; // @synthesize can_preview=_can_preview;
@property(nonatomic) long long is_purchased; // @synthesize is_purchased=_is_purchased;
@property(retain, nonatomic) YXMicStatusModel *all_micstatus; // @synthesize all_micstatus=_all_micstatus;
@property(nonatomic) int friendsLiveType; // @synthesize friendsLiveType=_friendsLiveType;
@property(nonatomic) _Bool ktv_switch; // @synthesize ktv_switch=_ktv_switch;
@property(copy, nonatomic) NSString *msg_linkmic; // @synthesize msg_linkmic=_msg_linkmic;
@property(nonatomic) _Bool can_linkmic; // @synthesize can_linkmic=_can_linkmic;
@property(nonatomic) long long isenumber; // @synthesize isenumber=_isenumber;
@property(copy, nonatomic) NSString *enumber; // @synthesize enumber=_enumber;
@property(nonatomic) int msgFrom; // @synthesize msgFrom=_msgFrom;
@property(nonatomic) _Bool isJoinedFansGroup; // @synthesize isJoinedFansGroup=_isJoinedFansGroup;
@property(nonatomic) _Bool hasFansGroup; // @synthesize hasFansGroup=_hasFansGroup;
@property(nonatomic) long long pay_live_status; // @synthesize pay_live_status=_pay_live_status;
@property(nonatomic) long long showtype; // @synthesize showtype=_showtype;
@property(copy, nonatomic) NSString *product_link; // @synthesize product_link=_product_link;
@property(retain, nonatomic) NSDictionary *pk_level_info; // @synthesize pk_level_info=_pk_level_info;
@property(retain, nonatomic) NSDictionary *explain_product; // @synthesize explain_product=_explain_product;
@property(retain, nonatomic) NSDictionary *product; // @synthesize product=_product;
@property(nonatomic) long long with_product; // @synthesize with_product=_with_product;
@property(nonatomic) _Bool isDeleteState; // @synthesize isDeleteState=_isDeleteState;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isFromeLiveRoom; // @synthesize isFromeLiveRoom=_isFromeLiveRoom;
@property(retain, nonatomic) NSNumber *KSYAudiokBPS; // @synthesize KSYAudiokBPS=_KSYAudiokBPS;
@property(retain, nonatomic) NSNumber *KSYMaxKeyInterval; // @synthesize KSYMaxKeyInterval=_KSYMaxKeyInterval;
@property(retain, nonatomic) NSNumber *KSYVideoInitBitrate; // @synthesize KSYVideoInitBitrate=_KSYVideoInitBitrate;
@property(retain, nonatomic) NSNumber *KSYVideoMaxBitrate; // @synthesize KSYVideoMaxBitrate=_KSYVideoMaxBitrate;
@property(retain, nonatomic) NSNumber *KSYVideoMinBitrate; // @synthesize KSYVideoMinBitrate=_KSYVideoMinBitrate;
@property(copy, nonatomic) NSString *watermark_text; // @synthesize watermark_text=_watermark_text;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) id watermark_logo; // @synthesize watermark_logo=_watermark_logo;
@property(nonatomic) long long show_watermark; // @synthesize show_watermark=_show_watermark;
@property(nonatomic) long long livetype; // @synthesize livetype=_livetype;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long waterposy; // @synthesize waterposy=_waterposy;
@property(nonatomic) long long waterposx; // @synthesize waterposx=_waterposx;
@property(copy, nonatomic) NSString *waterurl; // @synthesize waterurl=_waterurl;
@property(copy, nonatomic) NSString *ytypename; // @synthesize ytypename=_ytypename;
@property(nonatomic) long long show_buygoods_button; // @synthesize show_buygoods_button=_show_buygoods_button;
@property(retain, nonatomic) NSString *yzb_nickname; // @synthesize yzb_nickname=_yzb_nickname;
@property(nonatomic) long long ytypevt; // @synthesize ytypevt=_ytypevt;
@property(copy, nonatomic) NSString *wmid; // @synthesize wmid=_wmid;
@property(retain, nonatomic) YXWeiboInfo *weibo; // @synthesize weibo=_weibo;
@property(retain, nonatomic) NSNumber *videoheight; // @synthesize videoheight=_videoheight;
@property(retain, nonatomic) NSNumber *videowidth; // @synthesize videowidth=_videowidth;
@property(retain, nonatomic) NSNumber *videofps; // @synthesize videofps=_videofps;
@property(retain, nonatomic) NSNumber *videogop; // @synthesize videogop=_videogop;
@property(retain, nonatomic) NSNumber *videorate; // @synthesize videorate=_videorate;
@property(nonatomic) long long live_total; // @synthesize live_total=_live_total;
@property(nonatomic) long long online; // @synthesize online=_online;
@property(nonatomic) long long views; // @synthesize views=_views;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long looks; // @synthesize looks=_looks;
@property(nonatomic) long long has_praise; // @synthesize has_praise=_has_praise;
@property(nonatomic) double liveHeight; // @synthesize liveHeight=_liveHeight;
@property(copy, nonatomic) NSString *comment_content; // @synthesize comment_content=_comment_content;
@property(retain, nonatomic) NSNumber *praise_time; // @synthesize praise_time=_praise_time;
@property(retain, nonatomic) NSNumber *comment_time; // @synthesize comment_time=_comment_time;
@property(nonatomic) long long comment_count; // @synthesize comment_count=_comment_count;
@property(nonatomic) long long praise_count; // @synthesize praise_count=_praise_count;
@property(nonatomic) _Bool fans_expiry; // @synthesize fans_expiry=_fans_expiry;
@property(nonatomic) long long trueLoveGroupLevel; // @synthesize trueLoveGroupLevel=_trueLoveGroupLevel;
@property(nonatomic) _Bool inTrueLoveGroup; // @synthesize inTrueLoveGroup=_inTrueLoveGroup;
@property(nonatomic) _Bool hasTrueLoveGroup; // @synthesize hasTrueLoveGroup=_hasTrueLoveGroup;
@property(copy, nonatomic) NSString *trueLoveGroupName; // @synthesize trueLoveGroupName=_trueLoveGroupName;
@property(retain, nonatomic) NSDictionary *group; // @synthesize group=_group;
@property(nonatomic) long long iscontrol; // @synthesize iscontrol=_iscontrol;
@property(copy, nonatomic) NSString *carousel_scid; // @synthesize carousel_scid=_carousel_scid;
@property(copy, nonatomic) NSString *carousel_cover; // @synthesize carousel_cover=_carousel_cover;
@property(retain, nonatomic) NSString *follow_txt; // @synthesize follow_txt=_follow_txt;
@property(nonatomic) long long isfocus; // @synthesize isfocus=_isfocus;
@property(nonatomic) long long filesize; // @synthesize filesize=_filesize;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(copy, nonatomic) NSString *topicid; // @synthesize topicid=_topicid;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSNumber *createtime; // @synthesize createtime=_createtime;
@property(copy, nonatomic) NSString *createip; // @synthesize createip=_createip;
@property(retain, nonatomic) NSNumber *updatetime; // @synthesize updatetime=_updatetime;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lon; // @synthesize lon=_lon;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double liveduration; // @synthesize liveduration=_liveduration;
@property(nonatomic) long long m3u8segnum; // @synthesize m3u8segnum=_m3u8segnum;
@property(copy, nonatomic) NSString *m3u8url; // @synthesize m3u8url=_m3u8url;
@property(copy, nonatomic) NSString *linkurl; // @synthesize linkurl=_linkurl;
@property(copy, nonatomic) NSString *playurl_hevc; // @synthesize playurl_hevc=_playurl_hevc;
@property(copy, nonatomic) NSString *playurl; // @synthesize playurl=_playurl;
@property(copy, nonatomic) NSString *flvurl; // @synthesize flvurl=_flvurl;
@property(copy, nonatomic) NSString *rtmpurl; // @synthesize rtmpurl=_rtmpurl;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) YXCovers *covers; // @synthesize covers=_covers;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *carousel_owner_openid; // @synthesize carousel_owner_openid=_carousel_owner_openid;
@property(copy, nonatomic) NSString *carousel_memberid; // @synthesize carousel_memberid=_carousel_memberid;
@property(nonatomic) long long carousel_isfocus; // @synthesize carousel_isfocus=_carousel_isfocus;
@property(copy, nonatomic) NSString *memberid; // @synthesize memberid=_memberid;
@property(copy, nonatomic) NSString *liveid; // @synthesize liveid=_liveid;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *wb_status; // @synthesize wb_status=_wb_status;
@property(copy, nonatomic) NSString *wb_liveid; // @synthesize wb_liveid=_wb_liveid;
@property(copy, nonatomic) NSString *wb_ownerid; // @synthesize wb_ownerid=_wb_ownerid;
@property(copy, nonatomic) NSString *cover_path; // @synthesize cover_path=_cover_path;
@property(retain, nonatomic) WBNLUserInfoModel *owner_info; // @synthesize owner_info=_owner_info;
@property(retain, nonatomic) WBTBLiveShareInfo *wbtblShareInfo; // @synthesize wbtblShareInfo=_wbtblShareInfo;
@property(retain, nonatomic) WBNLShareInfoModel *share_info; // @synthesize share_info=_share_info;
@property(nonatomic) long long verified_type; // @synthesize verified_type=_verified_type;
@property(copy, nonatomic) NSString *container_id; // @synthesize container_id=_container_id;
@property(copy, nonatomic) NSString *eventid; // @synthesize eventid=_eventid;
@property(copy, nonatomic) NSString *live_type; // @synthesize live_type=_live_type;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl;
@property(nonatomic) _Bool isSchemeLink; // @synthesize isSchemeLink;
@property(retain, nonatomic) NSDictionary *schemeParams; // @synthesize schemeParams;
@property(copy, nonatomic) NSString *schemeLink; // @synthesize schemeLink;
@property(copy, nonatomic) NSString *liveRoomId; // @synthesize liveRoomId;
@property(copy, nonatomic) NSString *cellName; // @synthesize cellName=_cellName;
@property(nonatomic) long long liveRoomType; // @synthesize liveRoomType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)isPackagePurchase;
- (_Bool)isCoursePurchase;
- (_Bool)isPurchase;
- (id)showStartTime;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToYXLiveModel:(id)arg1;
@property(readonly, nonatomic) long long composeSharingType;
@property(readonly, nonatomic) WBTimelinePageInfo *sharingPageInfo;
- (id)extraMessageID;
- (long long)extraMessageType;
- (_Bool)notPayed;
- (_Bool)hasFocused;
- (_Bool)isReplay;
- (_Bool)canSendRedPacket;

// Remaining properties
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long extraMessageUid;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WBTimelineURL *miniCard;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) _Bool removable;
@property(readonly) Class superclass;

@end

