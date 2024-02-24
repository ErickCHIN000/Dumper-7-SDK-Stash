#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GOAPInteractable_FoodNode.BP_GOAPInteractable_FoodNode_C
// (Actor)

class UClass* ABP_GOAPInteractable_FoodNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GOAPInteractable_FoodNode_C");

	return Clss;
}


// BP_GOAPInteractable_FoodNode_C BP_GOAPInteractable_FoodNode.Default__BP_GOAPInteractable_FoodNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GOAPInteractable_FoodNode_C* ABP_GOAPInteractable_FoodNode_C::GetDefaultObj()
{
	static class ABP_GOAPInteractable_FoodNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GOAPInteractable_FoodNode_C*>(ABP_GOAPInteractable_FoodNode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GOAPInteractable_FoodNode.BP_GOAPInteractable_FoodNode_C.OnInteractionComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class UFLODRecord*                 CallFunc_FindRecordByRecordIndex_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GOAPInteractable_FoodNode_C::OnInteractionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsValid_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, class UFLODRecord* CallFunc_FindRecordByRecordIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GOAPInteractable_FoodNode_C", "OnInteractionComplete");

	Params::ABP_GOAPInteractable_FoodNode_C_OnInteractionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FindRecordByRecordIndex_ReturnValue = CallFunc_FindRecordByRecordIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


