#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x671 - 0x628)
// WidgetBlueprintGeneratedClass SocialMediaButton.SocialMediaButton_C
class USocialMediaButton_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HoverScaleUpAnim;                                  // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_1;                                      // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                URLToLaunch;                                       // 0x650(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnURLLaunched;                                     // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowHovered;                                       // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USocialMediaButton_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_SocialMediaButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_CanLaunchURL_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void OnURLLaunched__DelegateSignature(class USocialMediaButton_C* Widget, const class FString& URL);
};

}


