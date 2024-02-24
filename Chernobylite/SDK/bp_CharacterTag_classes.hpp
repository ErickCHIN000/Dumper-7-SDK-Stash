#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// BlueprintGeneratedClass bp_CharacterTag.bp_CharacterTag_C
class Ubp_CharacterTag_C : public UPrimaryDataAsset
{
public:
	TMap<class UClass*, class UTexture2D*>       Map;                                               // 0x30(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class Ubp_CharacterTag_C* GetDefaultObj();

	void GetImage(class UClass* Class, class UTexture2D** Image, class UClass* CurrentClass, class UClass* CallFunc_GetParentClass_ReturnValue, TSubclassOf<class ACGCharacter> K2Node_ClassDynamicCast_AsCGCharacter, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_NotEqual_ClassClass_ReturnValue, TSubclassOf<class ACGCharacter> K2Node_ClassDynamicCast_AsCGCharacter_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


