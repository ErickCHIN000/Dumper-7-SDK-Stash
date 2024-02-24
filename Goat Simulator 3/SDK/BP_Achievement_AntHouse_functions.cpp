#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_AntHouse.BP_Achievement_AntHouse_C
// (Actor)

class UClass* ABP_Achievement_AntHouse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_AntHouse_C");

	return Clss;
}


// BP_Achievement_AntHouse_C BP_Achievement_AntHouse.Default__BP_Achievement_AntHouse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_AntHouse_C* ABP_Achievement_AntHouse_C::GetDefaultObj()
{
	static class ABP_Achievement_AntHouse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_AntHouse_C*>(ABP_Achievement_AntHouse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_AntHouse.BP_Achievement_AntHouse_C.On Lick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_AntHouse_C::On_Lick(class AGGGoat* Goat, class AActor* LickedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_AntHouse_C", "On Lick");

	Params::ABP_Achievement_AntHouse_C_On_Lick_Params Parms{};

	Parms.Goat = Goat;
	Parms.LickedActor = LickedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_AntHouse.BP_Achievement_AntHouse_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_AntHouse_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_AntHouse_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_AntHouse.BP_Achievement_AntHouse_C.ExecuteUbergraph_BP_Achievement_AntHouse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGAchievementSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LickedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PActor_Base_C*           K2Node_DynamicCast_AsBP_PActor_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGGNamedActorInterface>K2Node_DynamicCast_AsGGNamed_Actor_Interface                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetGoatSimName_ReturnValue                              (None)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ABP_Achievement_AntHouse_C::ExecuteUbergraph_BP_Achievement_AntHouse(int32 EntryPoint, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat, class AActor* K2Node_CustomEvent_LickedActor, class ABP_PActor_Base_C* K2Node_DynamicCast_AsBP_PActor_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, TScriptInterface<class IGGNamedActorInterface> K2Node_DynamicCast_AsGGNamed_Actor_Interface, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetGoatSimName_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_AntHouse_C", "ExecuteUbergraph_BP_Achievement_AntHouse");

	Params::ABP_Achievement_AntHouse_C_ExecuteUbergraph_BP_Achievement_AntHouse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.K2Node_CustomEvent_LickedActor = K2Node_CustomEvent_LickedActor;
	Parms.K2Node_DynamicCast_AsBP_PActor_Base = K2Node_DynamicCast_AsBP_PActor_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGNamed_Actor_Interface = K2Node_DynamicCast_AsGGNamed_Actor_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGoatSimName_ReturnValue = CallFunc_GetGoatSimName_ReturnValue;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


