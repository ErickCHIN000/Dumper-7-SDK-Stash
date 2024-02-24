#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C
// (Actor)

class UClass* ABP_SkeletalItem_Meta_Fishfinder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Meta_Fishfinder_C");

	return Clss;
}


// BP_SkeletalItem_Meta_Fishfinder_C BP_SkeletalItem_Meta_Fishfinder.Default__BP_SkeletalItem_Meta_Fishfinder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Meta_Fishfinder_C* ABP_SkeletalItem_Meta_Fishfinder_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Meta_Fishfinder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Meta_Fishfinder_C*>(ABP_SkeletalItem_Meta_Fishfinder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.Play Fish Finder Finish Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Meta_Fishfinder_C::Play_Fish_Finder_Finish_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_Fishfinder_C", "Play Fish Finder Finish Sound");

	Params::ABP_SkeletalItem_Meta_Fishfinder_C_Play_Fish_Finder_Finish_Sound_Params Parms{};

	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.Play Sonar Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Meta_Fishfinder_C::Play_Sonar_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_Fishfinder_C", "Play Sonar Sound");

	Params::ABP_SkeletalItem_Meta_Fishfinder_C_Play_Sonar_Sound_Params Parms{};

	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.GetScreenWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidgetComponent* ABP_SkeletalItem_Meta_Fishfinder_C::GetScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_Fishfinder_C", "GetScreenWidget");

	Params::ABP_SkeletalItem_Meta_Fishfinder_C_GetScreenWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Meta_Fishfinder_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_Fishfinder_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C.ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Fishfinder_C*             K2Node_DynamicCast_AsW_Fishfinder                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Meta_Fishfinder_C::ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_Fishfinder_C* K2Node_DynamicCast_AsW_Fishfinder, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_Fishfinder_C", "ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder");

	Params::ABP_SkeletalItem_Meta_Fishfinder_C_ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Fishfinder = K2Node_DynamicCast_AsW_Fishfinder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


