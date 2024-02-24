#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BPContextResolver_PlayerBank.BPContextResolver_PlayerBank_C
class UBPContextResolver_PlayerBank_C : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UBPContextResolver_PlayerBank_C* GetDefaultObj();

	TArray<class UObject*> GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, TArray<class UObject*>& K2Node_MakeArray_Array, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UInventoryListComponent* CallFunc_GetBankInventoryComponent_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array1);
};

}


