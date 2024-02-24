#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MapMenu.WBP_MapMenu_C
// (None)

class UClass* UWBP_MapMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MapMenu_C");

	return Clss;
}


// WBP_MapMenu_C WBP_MapMenu.Default__WBP_MapMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MapMenu_C* UWBP_MapMenu_C::GetDefaultObj()
{
	static class UWBP_MapMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MapMenu_C*>(UWBP_MapMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MapMenu.WBP_MapMenu_C.SelectTabButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UWBP_MapMenu_C::SelectTabButton(int32 TabIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SelectTabButton");

	Params::UWBP_MapMenu_C_SelectTabButton_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwitchTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CineCamera_C*            K2Node_DynamicCast_AsBP_Cine_Camera                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_LargeMap_C*             K2Node_DynamicCast_AsWBP_Large_Map                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_MasteryList_C*          K2Node_DynamicCast_AsWBP_Mastery_List                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_CharacterCreation2_C*   K2Node_DynamicCast_AsWBP_Character_Creation_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_CharacterCreation2_C*   K2Node_DynamicCast_AsWBP_Character_Creation_2_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDelayedWidgetGenerator*     K2Node_DynamicCast_AsDelayed_Widget_Generator                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MapMenu_C::SwitchTab(int32 TabIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CineCamera_C* K2Node_DynamicCast_AsBP_Cine_Camera, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_1, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map, bool K2Node_DynamicCast_bSuccess_2, class UWBP_MasteryList_C* K2Node_DynamicCast_AsWBP_Mastery_List, bool K2Node_DynamicCast_bSuccess_3, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2, bool K2Node_DynamicCast_bSuccess_4, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2_1, bool K2Node_DynamicCast_bSuccess_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UDelayedWidgetGenerator* K2Node_DynamicCast_AsDelayed_Widget_Generator, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwitchTab");

	Params::UWBP_MapMenu_C_SwitchTab_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Cine_Camera = K2Node_DynamicCast_AsBP_Cine_Camera;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWBP_Large_Map = K2Node_DynamicCast_AsWBP_Large_Map;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsWBP_Mastery_List = K2Node_DynamicCast_AsWBP_Mastery_List;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsWBP_Character_Creation_2 = K2Node_DynamicCast_AsWBP_Character_Creation_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsWBP_Character_Creation_2_1 = K2Node_DynamicCast_AsWBP_Character_Creation_2_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsDelayed_Widget_Generator = K2Node_DynamicCast_AsDelayed_Widget_Generator;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SetWardrobeOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SetWardrobeOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SetWardrobeOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToUpgrades
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.StartCollapased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::StartCollapased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "StartCollapased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToMasteries
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToMasteries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToMasteries");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToMap
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToWardrobe
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToWardrobe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToWardrobe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.OnMapMenuClose
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::OnMapMenuClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "OnMapMenuClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToInsights
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToInsights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToInsights");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToLore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToLore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToLore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.BndEvt__WBP_MapMenu_WBP_LocalPlayerWidgetMap_K2Node_ComponentBoundEvent_2_OnClickedTitle__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::BndEvt__WBP_MapMenu_WBP_LocalPlayerWidgetMap_K2Node_ComponentBoundEvent_2_OnClickedTitle__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "BndEvt__WBP_MapMenu_WBP_LocalPlayerWidgetMap_K2Node_ComponentBoundEvent_2_OnClickedTitle__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.OnReopen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::OnReopen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "OnReopen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.BackButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::BackButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "BackButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.BndEvt__WBP_LargeMapView_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MapMenu_C::BndEvt__WBP_LargeMapView_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "BndEvt__WBP_LargeMapView_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature");

	Params::UWBP_MapMenu_C_BndEvt__WBP_LargeMapView_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMenu.WBP_MapMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToMapOrClose
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToMapOrClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToMapOrClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToUpgradesOrClose
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToUpgradesOrClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToUpgradesOrClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToMasteriesOrClose
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToMasteriesOrClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToMasteriesOrClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToEncyclopediaOrClose
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToEncyclopediaOrClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToEncyclopediaOrClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToWardrobeOrClose
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToWardrobeOrClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToWardrobeOrClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.BndEvt__WBP_MapMenu_WBP_PlayerProfileCustomization_K2Node_ComponentBoundEvent_1_CloseTitle__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::BndEvt__WBP_MapMenu_WBP_PlayerProfileCustomization_K2Node_ComponentBoundEvent_1_CloseTitle__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "BndEvt__WBP_MapMenu_WBP_PlayerProfileCustomization_K2Node_ComponentBoundEvent_1_CloseTitle__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToMysteries
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToMysteries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToMysteries");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.RefreshSandboxModal
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::RefreshSandboxModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "RefreshSandboxModal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.SwapToEncyclopedia
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::SwapToEncyclopedia()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "SwapToEncyclopedia");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.ExecuteUbergraph_WBP_MapMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapSubMenu             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapSubMenu             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapSubMenu             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapSubMenu             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapSubMenu             Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapSubMenu             Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Encyclopedia_C*         K2Node_DynamicCast_AsWBP_Encyclopedia                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMapSubMenu             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Encyclopedia_C*         K2Node_DynamicCast_AsWBP_Encyclopedia_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Encyclopedia_C*         K2Node_DynamicCast_AsWBP_Encyclopedia_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_Encyclopedia_C*         K2Node_DynamicCast_AsWBP_Encyclopedia_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_LargeMap_C*             K2Node_DynamicCast_AsWBP_Large_Map                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_MasteryList_C*          K2Node_DynamicCast_AsWBP_Mastery_List                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharacterCreation2_C*   K2Node_DynamicCast_AsWBP_Character_Creation_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharacterCreation2_C*   K2Node_DynamicCast_AsWBP_Character_Creation_2_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_MapTutorial_C*          K2Node_DynamicCast_AsWBP_Map_Tutorial                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_LargeMap_C*             K2Node_DynamicCast_AsWBP_Large_Map_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_MasteryList_C*          K2Node_DynamicCast_AsWBP_Mastery_List_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_LargeMap_C*             K2Node_DynamicCast_AsWBP_Large_Map_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Encyclopedia_C*         K2Node_DynamicCast_AsWBP_Encyclopedia_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_LargeMap_C*             K2Node_DynamicCast_AsWBP_Large_Map_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIntCVar_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMenu_C::ExecuteUbergraph_WBP_MapMenu(int32 EntryPoint, enum class EMapSubMenu Temp_byte_Variable, enum class EMapSubMenu Temp_byte_Variable_1, enum class EMapSubMenu Temp_byte_Variable_2, enum class EMapSubMenu Temp_byte_Variable_3, enum class EMapSubMenu Temp_byte_Variable_4, enum class EMapSubMenu Temp_byte_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Add_FloatFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetValue_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 Temp_int_Variable, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia, bool K2Node_DynamicCast_bSuccess_1, enum class EMapSubMenu K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_1, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Add_FloatFloat_ReturnValue_2, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_2, bool K2Node_DynamicCast_bSuccess_3, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_3, bool K2Node_DynamicCast_bSuccess_4, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map, bool K2Node_DynamicCast_bSuccess_5, class UWBP_MasteryList_C* K2Node_DynamicCast_AsWBP_Mastery_List, bool K2Node_DynamicCast_bSuccess_6, const class FString& K2Node_ComponentBoundEvent_Value, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2, bool K2Node_DynamicCast_bSuccess_7, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2_1, bool K2Node_DynamicCast_bSuccess_8, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue, class UWBP_MapTutorial_C* K2Node_DynamicCast_AsWBP_Map_Tutorial, bool K2Node_DynamicCast_bSuccess_10, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map_1, bool K2Node_DynamicCast_bSuccess_11, class UWBP_MasteryList_C* K2Node_DynamicCast_AsWBP_Mastery_List_1, bool K2Node_DynamicCast_bSuccess_12, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map_2, bool K2Node_DynamicCast_bSuccess_13, float CallFunc_Add_FloatFloat_ReturnValue_3, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_4, bool K2Node_DynamicCast_bSuccess_14, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map_3, bool K2Node_DynamicCast_bSuccess_15, int32 CallFunc_GetIntCVar_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "ExecuteUbergraph_WBP_MapMenu");

	Params::UWBP_MapMenu_C_ExecuteUbergraph_WBP_MapMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsWBP_Encyclopedia = K2Node_DynamicCast_AsWBP_Encyclopedia;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Encyclopedia_1 = K2Node_DynamicCast_AsWBP_Encyclopedia_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWBP_Encyclopedia_2 = K2Node_DynamicCast_AsWBP_Encyclopedia_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsWBP_Encyclopedia_3 = K2Node_DynamicCast_AsWBP_Encyclopedia_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsWBP_Large_Map = K2Node_DynamicCast_AsWBP_Large_Map;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsWBP_Mastery_List = K2Node_DynamicCast_AsWBP_Mastery_List;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Character_Creation_2 = K2Node_DynamicCast_AsWBP_Character_Creation_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Character_Creation_2_1 = K2Node_DynamicCast_AsWBP_Character_Creation_2_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Map_Tutorial = K2Node_DynamicCast_AsWBP_Map_Tutorial;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsWBP_Large_Map_1 = K2Node_DynamicCast_AsWBP_Large_Map_1;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsWBP_Mastery_List_1 = K2Node_DynamicCast_AsWBP_Mastery_List_1;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsWBP_Large_Map_2 = K2Node_DynamicCast_AsWBP_Large_Map_2;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWBP_Encyclopedia_4 = K2Node_DynamicCast_AsWBP_Encyclopedia_4;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_DynamicCast_AsWBP_Large_Map_3 = K2Node_DynamicCast_AsWBP_Large_Map_3;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetIntCVar_ReturnValue = CallFunc_GetIntCVar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMenu.WBP_MapMenu_C.OnOpenCustomization__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::OnOpenCustomization__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "OnOpenCustomization__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMenu.WBP_MapMenu_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MapMenu_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMenu_C", "OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


