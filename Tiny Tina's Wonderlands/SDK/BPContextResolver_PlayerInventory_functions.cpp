#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C
// (None)

class UClass* UBPContextResolver_PlayerInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPContextResolver_PlayerInventory_C");

	return Clss;
}


// BPContextResolver_PlayerInventory_C BPContextResolver_PlayerInventory.Default__BPContextResolver_PlayerInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPContextResolver_PlayerInventory_C* UBPContextResolver_PlayerInventory_C::GetDefaultObj()
{
	static class UBPContextResolver_PlayerInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPContextResolver_PlayerInventory_C*>(UBPContextResolver_PlayerInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C.GetContextForAttribute
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData*           Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ContextSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// TArray<class UObject*>             K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryListComponent*     CallFunc_GetInventoryComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)

TArray<class UObject*> UBPContextResolver_PlayerInventory_C::GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, TArray<class UObject*>& K2Node_MakeArray_Array, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UInventoryListComponent* CallFunc_GetInventoryComponent_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPContextResolver_PlayerInventory_C", "GetContextForAttribute");

	Params::UBPContextResolver_PlayerInventory_C_GetContextForAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.ContextSource = ContextSource;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryComponent_ReturnValue = CallFunc_GetInventoryComponent_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


