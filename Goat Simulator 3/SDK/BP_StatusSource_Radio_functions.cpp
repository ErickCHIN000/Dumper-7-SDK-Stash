#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StatusSource_Radio.BP_StatusSource_Radio_C
// (Actor)

class UClass* ABP_StatusSource_Radio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StatusSource_Radio_C");

	return Clss;
}


// BP_StatusSource_Radio_C BP_StatusSource_Radio.Default__BP_StatusSource_Radio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StatusSource_Radio_C* ABP_StatusSource_Radio_C::GetDefaultObj()
{
	static class ABP_StatusSource_Radio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StatusSource_Radio_C*>(ABP_StatusSource_Radio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.PitchDown__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StatusSource_Radio_C::PitchDown__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "PitchDown__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.PitchDown__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StatusSource_Radio_C::PitchDown__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "PitchDown__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StatusSource_Radio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatusSource_Radio_C::BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_StatusSource_Radio_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatusSource_Radio_C::BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature");

	Params::ABP_StatusSource_Radio_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.ObjectWasHeadbutted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     HeadbuttingGoat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatusSource_Radio_C::ObjectWasHeadbutted(class AGGGoat* HeadbuttingGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "ObjectWasHeadbutted");

	Params::ABP_StatusSource_Radio_C_ObjectWasHeadbutted_Params Parms{};

	Parms.HeadbuttingGoat = HeadbuttingGoat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.ModifyPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewPitch                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatusSource_Radio_C::ModifyPitch(float NewPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "ModifyPitch");

	Params::ABP_StatusSource_Radio_C_ModifyPitch_Params Parms{};

	Parms.NewPitch = NewPitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatusSource_Radio.BP_StatusSource_Radio_C.ExecuteUbergraph_BP_StatusSource_Radio
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSourceActive_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_Event_HeadbuttingGoat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewPitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatusSource_Radio_C::ExecuteUbergraph_BP_StatusSource_Radio(int32 EntryPoint, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, bool CallFunc_IsSourceActive_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AGGGoat* K2Node_Event_HeadbuttingGoat, bool Temp_bool_IsClosed_Variable, float K2Node_CustomEvent_NewPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatusSource_Radio_C", "ExecuteUbergraph_BP_StatusSource_Radio");

	Params::ABP_StatusSource_Radio_C_ExecuteUbergraph_BP_StatusSource_Radio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_IsSourceActive_ReturnValue = CallFunc_IsSourceActive_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_HeadbuttingGoat = K2Node_Event_HeadbuttingGoat;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_NewPitch = K2Node_CustomEvent_NewPitch;

	UObject::ProcessEvent(Func, &Parms);

}

}


