#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AITree_MushroomCompanion.AITree_MushroomCompanion_C
// (None)

class UClass* UAITree_MushroomCompanion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITree_MushroomCompanion_C");

	return Clss;
}


// AITree_MushroomCompanion_C AITree_MushroomCompanion.Default__AITree_MushroomCompanion_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAITree_MushroomCompanion_C* UAITree_MushroomCompanion_C::GetDefaultObj()
{
	static class UAITree_MushroomCompanion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITree_MushroomCompanion_C*>(UAITree_MushroomCompanion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_MushroomCompanion
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAITree_MushroomCompanion_C::BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_MushroomCompanion(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITree_MushroomCompanion_C", "BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_MushroomCompanion");

	Params::UAITree_MushroomCompanion_C_BndEvt__LeapDirect_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_MushroomCompanion_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class EAIActionResult         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITree_MushroomCompanion_C::BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITree_MushroomCompanion_C", "BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands");

	Params::UAITree_MushroomCompanion_C_BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_MushroomCompanion
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class EAIActionResult         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITree_MushroomCompanion_C::BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_MushroomCompanion(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITree_MushroomCompanion_C", "BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_MushroomCompanion");

	Params::UAITree_MushroomCompanion_C_BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_MushroomCompanion_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AITree_MushroomCompanion.AITree_MushroomCompanion_C.ExecuteUbergraph_AITree_MushroomCompanion
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector                       (NoDestructor)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context2                                    (ConstParm, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context1                                    (ConstParm, NoDestructor)
// enum class EAIActionResult         K2Node_GbxBoundEvent_Result1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector1                      (NoDestructor)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector2                      (NoDestructor)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context                                     (ConstParm, NoDestructor)
// enum class EAIActionResult         K2Node_GbxBoundEvent_Result                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITree_MushroomCompanion_C::ExecuteUbergraph_AITree_MushroomCompanion(int32 EntryPoint, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, class AGbxAIController* K2Node_GbxBoundEvent_AIController2, class AGbxCharacter* K2Node_GbxBoundEvent_Character2, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, enum class EAIActionResult K2Node_GbxBoundEvent_Result1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector1, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector2, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, enum class EAIActionResult K2Node_GbxBoundEvent_Result, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITree_MushroomCompanion_C", "ExecuteUbergraph_AITree_MushroomCompanion");

	Params::UAITree_MushroomCompanion_C_ExecuteUbergraph_AITree_MushroomCompanion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector = K2Node_MakeStruct_GbxBlackboardKeySelector;
	Parms.K2Node_GbxBoundEvent_AIController2 = K2Node_GbxBoundEvent_AIController2;
	Parms.K2Node_GbxBoundEvent_Character2 = K2Node_GbxBoundEvent_Character2;
	Parms.K2Node_GbxBoundEvent_Context2 = K2Node_GbxBoundEvent_Context2;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_GbxBoundEvent_AIController1 = K2Node_GbxBoundEvent_AIController1;
	Parms.K2Node_GbxBoundEvent_Character1 = K2Node_GbxBoundEvent_Character1;
	Parms.K2Node_GbxBoundEvent_Context1 = K2Node_GbxBoundEvent_Context1;
	Parms.K2Node_GbxBoundEvent_Result1 = K2Node_GbxBoundEvent_Result1;
	Parms.CallFunc_GetBlackboard_ReturnValue1 = CallFunc_GetBlackboard_ReturnValue1;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector1 = K2Node_MakeStruct_GbxBlackboardKeySelector1;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector2 = K2Node_MakeStruct_GbxBlackboardKeySelector2;
	Parms.K2Node_GbxBoundEvent_AIController = K2Node_GbxBoundEvent_AIController;
	Parms.K2Node_GbxBoundEvent_Character = K2Node_GbxBoundEvent_Character;
	Parms.K2Node_GbxBoundEvent_Context = K2Node_GbxBoundEvent_Context;
	Parms.K2Node_GbxBoundEvent_Result = K2Node_GbxBoundEvent_Result;
	Parms.CallFunc_GetBlackboard_ReturnValue2 = CallFunc_GetBlackboard_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


