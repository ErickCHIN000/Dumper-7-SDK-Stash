#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C
class IBPI_StructureAIInterfaces_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StructureAIInterfaces_C* GetDefaultObj();

	void GetFacingTarget(class UObject* QueryingActor, class AActor** FacingTarget);
	void GetRangedAttackLocation(class UObject* QueryingActor, enum class Enum_AttackLocationType AttackLocationType, struct FVector* Location);
	void CompleteCompletableStructure(class ANWXAICharacter* AICharacter, bool* Complete);
	void GetReachableNavTransform(class APawn* Pawn, bool* Success, struct FTransform* ReachableNavTransform, class UObject** Structure);
};

}


