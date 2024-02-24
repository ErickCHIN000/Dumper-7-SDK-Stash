#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass TwinSisters_Daggers_AnimBlueprint.TwinSisters_Daggers_AnimBlueprint_C
// (None)

class UClass* UTwinSisters_Daggers_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwinSisters_Daggers_AnimBlueprint_C");

	return Clss;
}


// TwinSisters_Daggers_AnimBlueprint_C TwinSisters_Daggers_AnimBlueprint.Default__TwinSisters_Daggers_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTwinSisters_Daggers_AnimBlueprint_C* UTwinSisters_Daggers_AnimBlueprint_C::GetDefaultObj()
{
	static class UTwinSisters_Daggers_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwinSisters_Daggers_AnimBlueprint_C*>(UTwinSisters_Daggers_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TwinSisters_Daggers_AnimBlueprint.TwinSisters_Daggers_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UTwinSisters_Daggers_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwinSisters_Daggers_AnimBlueprint_C", "AnimGraph");

	Params::UTwinSisters_Daggers_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function TwinSisters_Daggers_AnimBlueprint.TwinSisters_Daggers_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTwinSisters_Daggers_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwinSisters_Daggers_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UTwinSisters_Daggers_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TwinSisters_Daggers_AnimBlueprint.TwinSisters_Daggers_AnimBlueprint_C.ExecuteUbergraph_TwinSisters_Daggers_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTwinSisters_Daggers_AnimBlueprint_C::ExecuteUbergraph_TwinSisters_Daggers_AnimBlueprint(int32 EntryPoint, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwinSisters_Daggers_AnimBlueprint_C", "ExecuteUbergraph_TwinSisters_Daggers_AnimBlueprint");

	Params::UTwinSisters_Daggers_AnimBlueprint_C_ExecuteUbergraph_TwinSisters_Daggers_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


