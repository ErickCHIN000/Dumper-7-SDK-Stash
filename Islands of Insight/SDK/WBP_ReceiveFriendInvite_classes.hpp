#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x390 - 0x370)
// WidgetBlueprintGeneratedClass WBP_ReceiveFriendInvite.WBP_ReceiveFriendInvite_C
class UWBP_ReceiveFriendInvite_C : public UNotificationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Player_C*                         InviterSteamWidget;                                // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationHeader_C*             WBP_NotificationHeader;                            // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_YesNoButton_C*                    WBP_YesNoButton;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ReceiveFriendInvite_C* GetDefaultObj();

	void BndEvt__WBP_ReceivePartyInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(bool Response);
	void Construct();
	void ExecuteUbergraph_WBP_ReceiveFriendInvite(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_ComponentBoundEvent_Response, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetNicknameID_ReturnValue, const class FString& CallFunc_GetKrakenID_ReturnValue);
};

}


