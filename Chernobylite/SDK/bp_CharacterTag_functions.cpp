#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_CharacterTag.bp_CharacterTag_C
// (None)

class UClass* Ubp_CharacterTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_CharacterTag_C");

	return Clss;
}


// bp_CharacterTag_C bp_CharacterTag.Default__bp_CharacterTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_CharacterTag_C* Ubp_CharacterTag_C::GetDefaultObj()
{
	static class Ubp_CharacterTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_CharacterTag_C*>(Ubp_CharacterTag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_CharacterTag.bp_CharacterTag_C.GetImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CurrentClass                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetParentClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGCharacter>    K2Node_ClassDynamicCast_AsCGCharacter                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class ACGCharacter>    K2Node_ClassDynamicCast_AsCGCharacter_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubp_CharacterTag_C::GetImage(class UClass* Class, class UTexture2D** Image, class UClass* CurrentClass, class UClass* CallFunc_GetParentClass_ReturnValue, TSubclassOf<class ACGCharacter> K2Node_ClassDynamicCast_AsCGCharacter, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_NotEqual_ClassClass_ReturnValue, TSubclassOf<class ACGCharacter> K2Node_ClassDynamicCast_AsCGCharacter_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_CharacterTag_C", "GetImage");

	Params::Ubp_CharacterTag_C_GetImage_Params Parms{};

	Parms.Class = Class;
	Parms.CurrentClass = CurrentClass;
	Parms.CallFunc_GetParentClass_ReturnValue = CallFunc_GetParentClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsCGCharacter = K2Node_ClassDynamicCast_AsCGCharacter;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsCGCharacter_1 = K2Node_ClassDynamicCast_AsCGCharacter_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;

}

}


