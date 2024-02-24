#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA9 (0x309 - 0x260)
// WidgetBlueprintGeneratedClass Mobile_InviteFriendButton.Mobile_InviteFriendButton_C
class UMobile_InviteFriendButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Button_Image;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGButton*                             InviteFriendButton;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           InactiveImageTint;                                 // 0x2A8(0x28)(Edit, BlueprintVisible)
	class UTexture*                              InactiveImage;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           DefaultImageTint;                                  // 0x2D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                               DefaultImage;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLastInternetConnection;                           // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMobile_InviteFriendButton_C* GetDefaultObj();

	void UpdateButtonColor(bool bHasInternet, bool Temp_bool_Variable, const struct FSlateColor& K2Node_Select_Default, class UObject* CallFunc_SelectObject_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerInviteMobileWidget_GGButton_51_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_Mobile_InviteFriendButton(int32 EntryPoint, bool CallFunc_IsConnectedToInternet_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsConnectedToInternet_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnReleased__DelegateSignature();
};

}


