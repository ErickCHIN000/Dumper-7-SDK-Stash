#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BPContextResolver_PlayerInventory.BPContextResolver_PlayerInventory_C
class UBPContextResolver_PlayerInventory_C : public UAttributeContextResolver
{
public:

	static class UClass* StaticClass();
	static class UBPContextResolver_PlayerInventory_C* GetDefaultObj();

	TArray<class UObject*> GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, TArray<class UObject*>& K2Node_MakeArray_Array, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UInventoryListComponent* CallFunc_GetInventoryComponent_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array1);
};

}


