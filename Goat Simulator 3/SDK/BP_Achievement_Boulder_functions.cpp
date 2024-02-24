#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_Boulder.BP_Achievement_Boulder_C
// (Actor)

class UClass* ABP_Achievement_Boulder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_Boulder_C");

	return Clss;
}


// BP_Achievement_Boulder_C BP_Achievement_Boulder.Default__BP_Achievement_Boulder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_Boulder_C* ABP_Achievement_Boulder_C::GetDefaultObj()
{
	static class ABP_Achievement_Boulder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_Boulder_C*>(ABP_Achievement_Boulder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_Boulder.BP_Achievement_Boulder_C.On Lick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_Boulder_C::On_Lick(class AGGGoat* Goat, class AActor* LickedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Boulder_C", "On Lick");

	Params::ABP_Achievement_Boulder_C_On_Lick_Params Parms{};

	Parms.Goat = Goat;
	Parms.LickedActor = LickedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_Boulder.BP_Achievement_Boulder_C.On Headbutt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HeadbuttedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_Boulder_C::On_Headbutt(class AGGGoat* Goat, class AActor* HeadbuttedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Boulder_C", "On Headbutt");

	Params::ABP_Achievement_Boulder_C_On_Headbutt_Params Parms{};

	Parms.Goat = Goat;
	Parms.HeadbuttedActor = HeadbuttedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_Boulder.BP_Achievement_Boulder_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_Boulder_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Boulder_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_Boulder.BP_Achievement_Boulder_C.ExecuteUbergraph_BP_Achievement_Boulder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGAchievementSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGAchievementSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LickedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HeadbuttedActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PActor_Base_C*           K2Node_DynamicCast_AsBP_PActor_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PActor_Base_C*           K2Node_DynamicCast_AsBP_PActor_Base_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGGNamedActorInterface>K2Node_DynamicCast_AsGGNamed_Actor_Interface                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGGNamedActorInterface>K2Node_DynamicCast_AsGGNamed_Actor_Interface_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetGoatSimName_ReturnValue                              (None)
// class FText                        CallFunc_GetGoatSimName_ReturnValue_1                            (None)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void ABP_Achievement_Boulder_C::ExecuteUbergraph_BP_Achievement_Boulder(int32 EntryPoint, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class AGGGoat* K2Node_CustomEvent_Goat_1, class AActor* K2Node_CustomEvent_LickedActor, class AGGGoat* K2Node_CustomEvent_Goat, class AActor* K2Node_CustomEvent_HeadbuttedActor, class ABP_PActor_Base_C* K2Node_DynamicCast_AsBP_PActor_Base, bool K2Node_DynamicCast_bSuccess, class ABP_PActor_Base_C* K2Node_DynamicCast_AsBP_PActor_Base_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGGNamedActorInterface> K2Node_DynamicCast_AsGGNamed_Actor_Interface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGGNamedActorInterface> K2Node_DynamicCast_AsGGNamed_Actor_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_GetGoatSimName_ReturnValue, class FText CallFunc_GetGoatSimName_ReturnValue_1, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Boulder_C", "ExecuteUbergraph_BP_Achievement_Boulder");

	Params::ABP_Achievement_Boulder_C_ExecuteUbergraph_BP_Achievement_Boulder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_1 = CallFunc_GetGlobalEventHandler_ReturnValue_1;
	Parms.K2Node_CustomEvent_Goat_1 = K2Node_CustomEvent_Goat_1;
	Parms.K2Node_CustomEvent_LickedActor = K2Node_CustomEvent_LickedActor;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.K2Node_CustomEvent_HeadbuttedActor = K2Node_CustomEvent_HeadbuttedActor;
	Parms.K2Node_DynamicCast_AsBP_PActor_Base = K2Node_DynamicCast_AsBP_PActor_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_PActor_Base_1 = K2Node_DynamicCast_AsBP_PActor_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGGNamed_Actor_Interface = K2Node_DynamicCast_AsGGNamed_Actor_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGGNamed_Actor_Interface_1 = K2Node_DynamicCast_AsGGNamed_Actor_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGoatSimName_ReturnValue = CallFunc_GetGoatSimName_ReturnValue;
	Parms.CallFunc_GetGoatSimName_ReturnValue_1 = CallFunc_GetGoatSimName_ReturnValue_1;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_1 = CallFunc_GetGGPlayerController_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


