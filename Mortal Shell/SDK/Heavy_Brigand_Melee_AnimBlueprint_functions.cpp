#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C
// (None)

class UClass* UHeavy_Brigand_Melee_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Heavy_Brigand_Melee_AnimBlueprint_C");

	return Clss;
}


// Heavy_Brigand_Melee_AnimBlueprint_C Heavy_Brigand_Melee_AnimBlueprint.Default__Heavy_Brigand_Melee_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeavy_Brigand_Melee_AnimBlueprint_C* UHeavy_Brigand_Melee_AnimBlueprint_C::GetDefaultObj()
{
	static class UHeavy_Brigand_Melee_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeavy_Brigand_Melee_AnimBlueprint_C*>(UHeavy_Brigand_Melee_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHeavy_Brigand_Melee_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Brigand_Melee_AnimBlueprint_C", "AnimGraph");

	Params::UHeavy_Brigand_Melee_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.UpdateWalkRightWalkForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavy_Brigand_Melee_AnimBlueprint_C::UpdateWalkRightWalkForward(class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Brigand_Melee_AnimBlueprint_C", "UpdateWalkRightWalkForward");

	Params::UHeavy_Brigand_Melee_AnimBlueprint_C_UpdateWalkRightWalkForward_Params Parms{};

	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavy_Brigand_Melee_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Brigand_Melee_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UHeavy_Brigand_Melee_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.SetCombatStance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CombatStance_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeavy_Brigand_Melee_AnimBlueprint_C::SetCombatStance(bool CombatStance_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Brigand_Melee_AnimBlueprint_C", "SetCombatStance");

	Params::UHeavy_Brigand_Melee_AnimBlueprint_C_SetCombatStance_Params Parms{};

	Parms.CombatStance_ = CombatStance_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.ExecuteUbergraph_Heavy_Brigand_Melee_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CombatStance_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeavy_Brigand_Melee_AnimBlueprint_C::ExecuteUbergraph_Heavy_Brigand_Melee_AnimBlueprint(int32 EntryPoint, bool K2Node_CustomEvent_CombatStance_, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Heavy_Brigand_Melee_AnimBlueprint_C", "ExecuteUbergraph_Heavy_Brigand_Melee_AnimBlueprint");

	Params::UHeavy_Brigand_Melee_AnimBlueprint_C_ExecuteUbergraph_Heavy_Brigand_Melee_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CombatStance_ = K2Node_CustomEvent_CombatStance_;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


