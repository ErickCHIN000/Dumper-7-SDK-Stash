#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x378 - 0x348)
// WidgetBlueprintGeneratedClass WBP_NavBar_News_PatchNotes.WBP_NavBar_News_PatchNotes_C
class UWBP_NavBar_News_PatchNotes_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_NavBar_C*                         News_PN_NavBar;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                URL;                                               // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CloseNavBarNews;                                   // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_NavBar_News_PatchNotes_C* GetDefaultObj();

	void ShowCredits(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Credits_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void OnLoginStateChanged(enum class E_UILoginState UILoginState, enum class E_UILoginState L_MinimumAllowedLoginState, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void ShowPatchNotes(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_PatchNotes_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void Options(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Options_StartScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void ShowMotD(class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_MotdScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void BndEvt__WBP_NavBar_News_PatchNotes_Bottom_NavBar_K2Node_ComponentBoundEvent_0_NavBar_ButtonClicked__DelegateSignature(class FText ButtonLabel, int32 Index);
	void Construct();
	void SwitchToLogoutButton();
	void ExecuteUbergraph_WBP_NavBar_News_PatchNotes(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_ButtonLabel, int32 K2Node_ComponentBoundEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchInteger_CmpSuccess, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUILoginInfo& CallFunc_GetInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CloseNavBarNews__DelegateSignature();
};

}


