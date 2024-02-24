#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C
// (None)

class UClass* UWid_OnScreen_Inventory_HP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_OnScreen_Inventory_HP_C");

	return Clss;
}


// wid_OnScreen_Inventory_HP_C wid_OnScreen_Inventory_HP.Default__wid_OnScreen_Inventory_HP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_OnScreen_Inventory_HP_C* UWid_OnScreen_Inventory_HP_C::GetDefaultObj()
{
	static class UWid_OnScreen_Inventory_HP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_OnScreen_Inventory_HP_C*>(UWid_OnScreen_Inventory_HP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C.UpdateVisibilityContainerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPhotoModeActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreen_Inventory_HP_C::UpdateVisibilityContainerVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsPhotoModeActive_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreen_Inventory_HP_C", "UpdateVisibilityContainerVisibility");

	Params::UWid_OnScreen_Inventory_HP_C_UpdateVisibilityContainerVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetIsPhotoModeActive_ReturnValue = CallFunc_GetIsPhotoModeActive_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_OnScreen_Inventory_HP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreen_Inventory_HP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_OnScreen_Inventory_HP_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreen_Inventory_HP_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C.BindVisibilityContainerCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreen_Inventory_HP_C::BindVisibilityContainerCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreen_Inventory_HP_C", "BindVisibilityContainerCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C.UnbindVisibilityContainerCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreen_Inventory_HP_C::UnbindVisibilityContainerCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreen_Inventory_HP_C", "UnbindVisibilityContainerCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C.PhotomodeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActivated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_OnScreen_Inventory_HP_C::PhotomodeChanged(bool bIsActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreen_Inventory_HP_C", "PhotomodeChanged");

	Params::UWid_OnScreen_Inventory_HP_C_PhotomodeChanged_Params Parms{};

	Parms.bIsActivated = bIsActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreen_Inventory_HP.wid_OnScreen_Inventory_HP_C.ExecuteUbergraph_wid_OnScreen_Inventory_HP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bIsActivated                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameModeBase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreen_Inventory_HP_C::ExecuteUbergraph_wid_OnScreen_Inventory_HP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_bIsActivated, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreen_Inventory_HP_C", "ExecuteUbergraph_wid_OnScreen_Inventory_HP");

	Params::UWid_OnScreen_Inventory_HP_C_ExecuteUbergraph_wid_OnScreen_Inventory_HP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_bIsActivated = K2Node_CustomEvent_bIsActivated;
	Parms.CallFunc_GetCGGameModeBase_ReturnValue = CallFunc_GetCGGameModeBase_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


