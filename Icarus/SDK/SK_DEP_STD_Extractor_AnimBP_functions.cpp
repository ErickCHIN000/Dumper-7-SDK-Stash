#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C
// (None)

class UClass* USK_DEP_STD_Extractor_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_DEP_STD_Extractor_AnimBP_C");

	return Clss;
}


// SK_DEP_STD_Extractor_AnimBP_C SK_DEP_STD_Extractor_AnimBP.Default__SK_DEP_STD_Extractor_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_DEP_STD_Extractor_AnimBP_C* USK_DEP_STD_Extractor_AnimBP_C::GetDefaultObj()
{
	static class USK_DEP_STD_Extractor_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_DEP_STD_Extractor_AnimBP_C*>(USK_DEP_STD_Extractor_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_DEP_STD_Extractor_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_STD_Extractor_AnimBP_C", "AnimGraph");

	Params::USK_DEP_STD_Extractor_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_DEP_STD_Extractor_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_STD_Extractor_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_DEP_STD_Extractor_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C.ExecuteUbergraph_SK_DEP_STD_Extractor_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Extractor_C*             K2Node_DynamicCast_AsBP_Extractor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USK_DEP_STD_Extractor_AnimBP_C::ExecuteUbergraph_SK_DEP_STD_Extractor_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Extractor_C* K2Node_DynamicCast_AsBP_Extractor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_DEP_STD_Extractor_AnimBP_C", "ExecuteUbergraph_SK_DEP_STD_Extractor_AnimBP");

	Params::USK_DEP_STD_Extractor_AnimBP_C_ExecuteUbergraph_SK_DEP_STD_Extractor_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Extractor = K2Node_DynamicCast_AsBP_Extractor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


