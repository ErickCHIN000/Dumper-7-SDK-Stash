#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9F8 - 0x9F0)
// BlueprintGeneratedClass ShieldComponent.ShieldComponent_C
class UShieldComponent_C : public UTTLShieldComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UShieldComponent_C* GetDefaultObj();

	void OverrideCollisionSetting(class AActor* OwnerActor, class UPrimitiveComponent* PrimitiveComponent);
	void ExecuteUbergraph_ShieldComponent(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class UPrimitiveComponent* K2Node_Event_primitiveComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BlockCollisionByCharacterType_ReturnValue, bool CallFunc_SetCollisionObjectTypeByCharacterType_result);
};

}


