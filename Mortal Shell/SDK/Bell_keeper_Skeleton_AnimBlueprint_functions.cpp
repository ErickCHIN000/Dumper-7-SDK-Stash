#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C
// (None)

class UClass* UBell_keeper_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bell_keeper_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Bell_keeper_Skeleton_AnimBlueprint_C Bell_keeper_Skeleton_AnimBlueprint.Default__Bell_keeper_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBell_keeper_Skeleton_AnimBlueprint_C* UBell_keeper_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UBell_keeper_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBell_keeper_Skeleton_AnimBlueprint_C*>(UBell_keeper_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBell_keeper_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bell_keeper_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UBell_keeper_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.CalcPlayerLookAtStuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFogCultistNPC_C*            K2Node_DynamicCast_AsFog_Cultist_NPC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBell_keeper_Skeleton_AnimBlueprint_C::CalcPlayerLookAtStuff(float DeltaTime, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, class AFogCultistNPC_C* K2Node_DynamicCast_AsFog_Cultist_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bell_keeper_Skeleton_AnimBlueprint_C", "CalcPlayerLookAtStuff");

	Params::UBell_keeper_Skeleton_AnimBlueprint_C_CalcPlayerLookAtStuff_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFog_Cultist_NPC = K2Node_DynamicCast_AsFog_Cultist_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBell_keeper_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bell_keeper_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UBell_keeper_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Bell_keeper_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBell_keeper_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Bell_keeper_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bell_keeper_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Bell_keeper_Skeleton_AnimBlueprint");

	Params::UBell_keeper_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Bell_keeper_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


