#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C
// (None)

class UClass* USK_BLD_Window_Wood_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_BLD_Window_Wood_AnimBP_C");

	return Clss;
}


// SK_BLD_Window_Wood_AnimBP_C SK_BLD_Window_Wood_AnimBP.Default__SK_BLD_Window_Wood_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_BLD_Window_Wood_AnimBP_C* USK_BLD_Window_Wood_AnimBP_C::GetDefaultObj()
{
	static class USK_BLD_Window_Wood_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_BLD_Window_Wood_AnimBP_C*>(USK_BLD_Window_Wood_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_BLD_Window_Wood_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_Window_Wood_AnimBP_C", "AnimGraph");

	Params::USK_BLD_Window_Wood_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BLD_Window_Wood_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_Window_Wood_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_BLD_Window_Wood_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C.ExecuteUbergraph_SK_BLD_Window_Wood_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Window_Base_C*           K2Node_DynamicCast_AsBP_Window_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_BLD_Window_Wood_AnimBP_C::ExecuteUbergraph_SK_BLD_Window_Wood_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_BLD_Window_Wood_AnimBP_C", "ExecuteUbergraph_SK_BLD_Window_Wood_AnimBP");

	Params::USK_BLD_Window_Wood_AnimBP_C_ExecuteUbergraph_SK_BLD_Window_Wood_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Window_Base = K2Node_DynamicCast_AsBP_Window_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


