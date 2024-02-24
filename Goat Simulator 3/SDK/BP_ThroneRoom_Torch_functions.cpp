#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C
// (Actor)

class UClass* ABP_ThroneRoom_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThroneRoom_Torch_C");

	return Clss;
}


// BP_ThroneRoom_Torch_C BP_ThroneRoom_Torch.Default__BP_ThroneRoom_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThroneRoom_Torch_C* ABP_ThroneRoom_Torch_C::GetDefaultObj()
{
	static class ABP_ThroneRoom_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThroneRoom_Torch_C*>(ABP_ThroneRoom_Torch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Torch_C::OnRep_IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "OnRep_IsActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.DeactivateTorchFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Torch_C::DeactivateTorchFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "DeactivateTorchFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.ActivateTorchFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThroneRoom_Torch_C::ActivateTorchFX(class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "ActivateTorchFX");

	Params::ABP_ThroneRoom_Torch_C_ActivateTorchFX_Params Parms{};

	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.Set Torch Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThroneRoom_Torch_C::Set_Torch_Active(bool Active, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "Set Torch Active");

	Params::ABP_ThroneRoom_Torch_C_Set_Torch_Active_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Torch_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Torch_C::BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_ThroneRoom_Torch_C_BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Torch_C::BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature");

	Params::ABP_ThroneRoom_Torch_C_BndEvt__BP_ThroneRoom_Torch_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Torch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.ResetTorchColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Torch_C::ResetTorchColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "ResetTorchColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Torch.BP_ThroneRoom_Torch_C.ExecuteUbergraph_BP_ThroneRoom_Torch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLightColor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThroneRoom_Torch_C::ExecuteUbergraph_BP_ThroneRoom_Torch(int32 EntryPoint, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Torch_C", "ExecuteUbergraph_BP_ThroneRoom_Torch");

	Params::ABP_ThroneRoom_Torch_C_ExecuteUbergraph_BP_ThroneRoom_Torch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLightColor_ReturnValue = CallFunc_GetLightColor_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


