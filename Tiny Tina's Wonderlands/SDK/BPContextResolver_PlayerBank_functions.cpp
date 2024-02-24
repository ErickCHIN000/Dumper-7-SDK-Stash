#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPContextResolver_PlayerBank.BPContextResolver_PlayerBank_C
// (None)

class UClass* UBPContextResolver_PlayerBank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPContextResolver_PlayerBank_C");

	return Clss;
}


// BPContextResolver_PlayerBank_C BPContextResolver_PlayerBank.Default__BPContextResolver_PlayerBank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPContextResolver_PlayerBank_C* UBPContextResolver_PlayerBank_C::GetDefaultObj()
{
	static class UBPContextResolver_PlayerBank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPContextResolver_PlayerBank_C*>(UBPContextResolver_PlayerBank_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPContextResolver_PlayerBank.BPContextResolver_PlayerBank_C.GetContextForAttribute
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData*           Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ContextSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryListComponent*     CallFunc_GetBankInventoryComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)

TArray<class UObject*> UBPContextResolver_PlayerBank_C::GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, TArray<class UObject*>& K2Node_MakeArray_Array, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UInventoryListComponent* CallFunc_GetBankInventoryComponent_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPContextResolver_PlayerBank_C", "GetContextForAttribute");

	Params::UBPContextResolver_PlayerBank_C_GetContextForAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.ContextSource = ContextSource;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBankInventoryComponent_ReturnValue = CallFunc_GetBankInventoryComponent_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


