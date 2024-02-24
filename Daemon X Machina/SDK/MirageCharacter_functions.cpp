#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirageCharacter.MirageCharacter_C
// (Actor, Pawn)

class UClass* AMirageCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirageCharacter_C");

	return Clss;
}


// MirageCharacter_C MirageCharacter.Default__MirageCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMirageCharacter_C* AMirageCharacter_C::GetDefaultObj()
{
	static class AMirageCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMirageCharacter_C*>(AMirageCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MirageCharacter.MirageCharacter_C.InitializeBefore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMirageCharacter_C::InitializeBefore(class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UClass* CallFunc_GetObjectClass_ReturnValue2, class UClass* CallFunc_GetObjectClass_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class UClass* CallFunc_GetObjectClass_ReturnValue4, class UClass* CallFunc_GetObjectClass_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, class UClass* CallFunc_GetObjectClass_ReturnValue6, class UClass* CallFunc_GetObjectClass_ReturnValue7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageCharacter_C", "InitializeBefore");

	Params::AMirageCharacter_C_InitializeBefore_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue1 = CallFunc_GetObjectClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetObjectClass_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue2;
	Parms.CallFunc_GetObjectClass_ReturnValue3 = CallFunc_GetObjectClass_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetObjectClass_ReturnValue4 = CallFunc_GetObjectClass_ReturnValue4;
	Parms.CallFunc_GetObjectClass_ReturnValue5 = CallFunc_GetObjectClass_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.CallFunc_GetObjectClass_ReturnValue6 = CallFunc_GetObjectClass_ReturnValue6;
	Parms.CallFunc_GetObjectClass_ReturnValue7 = CallFunc_GetObjectClass_ReturnValue7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MirageCharacter.MirageCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMirageCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirageCharacter.MirageCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMirageCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MirageCharacter.MirageCharacter_C.ExecuteUbergraph_MirageCharacter
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCollisionByCharacterType_result                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IgnoreCollisionByCharacterType_result                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMirageCharacter_C::ExecuteUbergraph_MirageCharacter(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_SetCollisionByCharacterType_result, bool CallFunc_IgnoreCollisionByCharacterType_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirageCharacter_C", "ExecuteUbergraph_MirageCharacter");

	Params::AMirageCharacter_C_ExecuteUbergraph_MirageCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_SetCollisionByCharacterType_result = CallFunc_SetCollisionByCharacterType_result;
	Parms.CallFunc_IgnoreCollisionByCharacterType_result = CallFunc_IgnoreCollisionByCharacterType_result;

	UObject::ProcessEvent(Func, &Parms);

}

}


