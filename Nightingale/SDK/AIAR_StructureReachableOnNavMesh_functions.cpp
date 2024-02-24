#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAR_StructureReachableOnNavMesh.AIAR_StructureReachableOnNavMesh_C
// (None)

class UClass* UAIAR_StructureReachableOnNavMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAR_StructureReachableOnNavMesh_C");

	return Clss;
}


// AIAR_StructureReachableOnNavMesh_C AIAR_StructureReachableOnNavMesh.Default__AIAR_StructureReachableOnNavMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAR_StructureReachableOnNavMesh_C* UAIAR_StructureReachableOnNavMesh_C::GetDefaultObj()
{
	static class UAIAR_StructureReachableOnNavMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAR_StructureReachableOnNavMesh_C*>(UAIAR_StructureReachableOnNavMesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAR_StructureReachableOnNavMesh.AIAR_StructureReachableOnNavMesh_C.CheckTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwnerPawn_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureAIInterfaces_C>K2Node_DynamicCast_AsBPI_Structure_AIInterfaces                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReachableNavTransform_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetReachableNavTransform_ReachableNavTransform          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetReachableNavTransform_Structure                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool UAIAR_StructureReachableOnNavMesh_C::CheckTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, TScriptInterface<class IBPI_StructureAIInterfaces_C> K2Node_DynamicCast_AsBPI_Structure_AIInterfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetReachableNavTransform_Success, const struct FTransform& CallFunc_GetReachableNavTransform_ReachableNavTransform, class UObject* CallFunc_GetReachableNavTransform_Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_StructureReachableOnNavMesh_C", "CheckTargetRequirements");

	Params::UAIAR_StructureReachableOnNavMesh_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwnerPawn_ReturnValue = CallFunc_GetOwnerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Structure_AIInterfaces = K2Node_DynamicCast_AsBPI_Structure_AIInterfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetReachableNavTransform_Success = CallFunc_GetReachableNavTransform_Success;
	Parms.CallFunc_GetReachableNavTransform_ReachableNavTransform = CallFunc_GetReachableNavTransform_ReachableNavTransform;
	Parms.CallFunc_GetReachableNavTransform_Structure = CallFunc_GetReachableNavTransform_Structure;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


