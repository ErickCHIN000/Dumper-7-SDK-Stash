#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C
// (None)

class UClass* UAIAspect_SetBlackboardBool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_SetBlackboardBool_C");

	return Clss;
}


// AIAspect_SetBlackboardBool_C AIAspect_SetBlackboardBool.Default__AIAspect_SetBlackboardBool_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAspect_SetBlackboardBool_C* UAIAspect_SetBlackboardBool_C::GetDefaultObj()
{
	static class UAIAspect_SetBlackboardBool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_SetBlackboardBool_C*>(UAIAspect_SetBlackboardBool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAIAspect_SetBlackboardBool_C::BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_SetBlackboardBool_C", "BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool");

	Params::UAIAspect_SetBlackboardBool_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class EAIActionResult         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAspect_SetBlackboardBool_C::BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_SetBlackboardBool_C", "BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool");

	Params::UAIAspect_SetBlackboardBool_C_BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.ExecuteUbergraph_AIAspect_SetBlackboardBool
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context1                                    (ConstParm, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context                                     (ConstParm, NoDestructor)
// enum class EAIActionResult         K2Node_GbxBoundEvent_Result                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAspect_SetBlackboardBool_C::ExecuteUbergraph_AIAspect_SetBlackboardBool(int32 EntryPoint, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, enum class EAIActionResult K2Node_GbxBoundEvent_Result, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_SetBlackboardBool_C", "ExecuteUbergraph_AIAspect_SetBlackboardBool");

	Params::UAIAspect_SetBlackboardBool_C_ExecuteUbergraph_AIAspect_SetBlackboardBool_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxBoundEvent_AIController1 = K2Node_GbxBoundEvent_AIController1;
	Parms.K2Node_GbxBoundEvent_Character1 = K2Node_GbxBoundEvent_Character1;
	Parms.K2Node_GbxBoundEvent_Context1 = K2Node_GbxBoundEvent_Context1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_GbxBoundEvent_AIController = K2Node_GbxBoundEvent_AIController;
	Parms.K2Node_GbxBoundEvent_Character = K2Node_GbxBoundEvent_Character;
	Parms.K2Node_GbxBoundEvent_Context = K2Node_GbxBoundEvent_Context;
	Parms.K2Node_GbxBoundEvent_Result = K2Node_GbxBoundEvent_Result;
	Parms.CallFunc_GetBlackboard_ReturnValue1 = CallFunc_GetBlackboard_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


