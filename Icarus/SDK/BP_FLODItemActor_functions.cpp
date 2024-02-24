#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FLODItemActor.BP_FLODItemActor_C
// (Actor)

class UClass* ABP_FLODItemActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FLODItemActor_C");

	return Clss;
}


// BP_FLODItemActor_C BP_FLODItemActor.Default__BP_FLODItemActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FLODItemActor_C* ABP_FLODItemActor_C::GetDefaultObj()
{
	static class ABP_FLODItemActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FLODItemActor_C*>(ABP_FLODItemActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FLODItemActor.BP_FLODItemActor_C.BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UFLODActorComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODActorRecordInstance    Current                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FFLODActorRecordInstance    Previous                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_FLODItemActor_C::BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature(class UFLODActorComponent* Component, struct FFLODActorRecordInstance& Current, struct FFLODActorRecordInstance& Previous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODItemActor_C", "BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature");

	Params::ABP_FLODItemActor_C_BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature_Params Parms{};

	Parms.Component = Component;
	Parms.Current = Current;
	Parms.Previous = Previous;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FLODItemActor.BP_FLODItemActor_C.ExecuteUbergraph_BP_FLODItemActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODActorComponent*         K2Node_ComponentBoundEvent_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFLODActorRecordInstance    K2Node_ComponentBoundEvent_Current                               (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FFLODActorRecordInstance    K2Node_ComponentBoundEvent_Previous                              (ConstParm, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecayableComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FLODItemActor_C::ExecuteUbergraph_BP_FLODItemActor(int32 EntryPoint, class UFLODActorComponent* K2Node_ComponentBoundEvent_Component, const struct FFLODActorRecordInstance& K2Node_ComponentBoundEvent_Current, const struct FFLODActorRecordInstance& K2Node_ComponentBoundEvent_Previous, enum class EValid CallFunc_GetTrait_Paths, class UDecayableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODItemActor_C", "ExecuteUbergraph_BP_FLODItemActor");

	Params::ABP_FLODItemActor_C_ExecuteUbergraph_BP_FLODItemActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Component = K2Node_ComponentBoundEvent_Component;
	Parms.K2Node_ComponentBoundEvent_Current = K2Node_ComponentBoundEvent_Current;
	Parms.K2Node_ComponentBoundEvent_Previous = K2Node_ComponentBoundEvent_Previous;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


