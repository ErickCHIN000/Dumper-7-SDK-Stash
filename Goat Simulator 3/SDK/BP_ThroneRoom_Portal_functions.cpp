#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThroneRoom_Portal.BP_ThroneRoom_Portal_C
// (Actor)

class UClass* ABP_ThroneRoom_Portal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThroneRoom_Portal_C");

	return Clss;
}


// BP_ThroneRoom_Portal_C BP_ThroneRoom_Portal.Default__BP_ThroneRoom_Portal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThroneRoom_Portal_C* ABP_ThroneRoom_Portal_C::GetDefaultObj()
{
	static class ABP_ThroneRoom_Portal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThroneRoom_Portal_C*>(ABP_ThroneRoom_Portal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThroneRoom_Portal.BP_ThroneRoom_Portal_C.BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Portal_C::BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Portal_C", "BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_ThroneRoom_Portal_C_BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Portal.BP_ThroneRoom_Portal_C.BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Portal_C::BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Portal_C", "BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature");

	Params::ABP_ThroneRoom_Portal_C_BndEvt__BP_ThroneRoom_Portals_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Portal.BP_ThroneRoom_Portal_C.PlayPortalAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Portal_C::PlayPortalAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Portal_C", "PlayPortalAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Portal.BP_ThroneRoom_Portal_C.ExecuteUbergraph_BP_ThroneRoom_Portal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Portal_C::ExecuteUbergraph_BP_ThroneRoom_Portal(int32 EntryPoint, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Portal_C", "ExecuteUbergraph_BP_ThroneRoom_Portal");

	Params::ABP_ThroneRoom_Portal_C_ExecuteUbergraph_BP_ThroneRoom_Portal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


