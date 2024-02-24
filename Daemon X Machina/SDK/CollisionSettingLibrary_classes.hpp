#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CollisionSettingLibrary.CollisionSettingLibrary_C
class UCollisionSettingLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCollisionSettingLibrary_C* GetDefaultObj();

	void SetCollisionObjectTypeByCharacterType(class AActor* Instigator, class UPrimitiveComponent* ComponentToSet, class UObject* __WorldContext, bool* Result, bool CallFunc_SetCollisionObjectTypeByCharacterType_ReturnValue);
	void SetCollisionByCharacterType(class AActor* Instigator, class UPrimitiveComponent* ComponentToSet, class UObject* __WorldContext, bool* Result, bool CallFunc_SetCollisionByCharacterType_ReturnValue);
	void IgnoreCollisionByCharacterType(class AActor* Instigator, class UPrimitiveComponent* ComponentToIgnore, class UObject* __WorldContext, bool* Result, bool CallFunc_IgnoreCollisionByCharacterType_ReturnValue);
};

}


