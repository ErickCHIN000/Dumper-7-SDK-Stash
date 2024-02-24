#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Encounters.WBP_DB_Encounters_C
// (None)

class UClass* UWBP_DB_Encounters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Encounters_C");

	return Clss;
}


// WBP_DB_Encounters_C WBP_DB_Encounters.Default__WBP_DB_Encounters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Encounters_C* UWBP_DB_Encounters_C::GetDefaultObj()
{
	static class UWBP_DB_Encounters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Encounters_C*>(UWBP_DB_Encounters_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Encounters.WBP_DB_Encounters_C.SetEncounterOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_Encounters_C::SetEncounterOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Encounters_C", "SetEncounterOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Encounters.WBP_DB_Encounters_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Encounters_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Encounters_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Encounters.WBP_DB_Encounters_C.OnEncounterGymReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_Encounters_C::OnEncounterGymReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Encounters_C", "OnEncounterGymReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Encounters.WBP_DB_Encounters_C.ExecuteUbergraph_WBP_DB_Encounters
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreEncounterAssetsLoaded_AssetsLoaded                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Encounters_C::ExecuteUbergraph_WBP_DB_Encounters(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_AreEncounterAssetsLoaded_AssetsLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Encounters_C", "ExecuteUbergraph_WBP_DB_Encounters");

	Params::UWBP_DB_Encounters_C_ExecuteUbergraph_WBP_DB_Encounters_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AreEncounterAssetsLoaded_AssetsLoaded = CallFunc_AreEncounterAssetsLoaded_AssetsLoaded;

	UObject::ProcessEvent(Func, &Parms);

}

}


