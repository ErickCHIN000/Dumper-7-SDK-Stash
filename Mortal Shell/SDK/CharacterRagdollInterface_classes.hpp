#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CharacterRagdollInterface.CharacterRagdollInterface_C
class ICharacterRagdollInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICharacterRagdollInterface_C* GetDefaultObj();

	void EndNullState();
	void BeginNullState();
	void ReviveMesh();
	void StopMesh();
};

}


