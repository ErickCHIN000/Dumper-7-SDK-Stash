#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x260 - 0x258)
// BlueprintGeneratedClass BP_BASE_ITEM.BP_BASE_ITEM_C
class ABP_BASE_ITEM_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class ABP_BASE_ITEM_C* GetDefaultObj();

	TArray<class UMaterialInterface*> Get_Materials(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue);
	class UMaterialInterface* GetMaterial(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
	void Interaction();
	void End_Interaction();
	void ExecuteUbergraph_BP_BASE_ITEM(int32 EntryPoint);
};

}


