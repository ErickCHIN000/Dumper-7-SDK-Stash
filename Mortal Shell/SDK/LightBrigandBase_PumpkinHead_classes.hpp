#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x11F8 - 0x11F0)
// BlueprintGeneratedClass LightBrigandBase_PumpkinHead.LightBrigandBase_PumpkinHead_C
class ALightBrigandBase_PumpkinHead_C : public ALightBrigandBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ALightBrigandBase_PumpkinHead_C* GetDefaultObj();

	void SetupHelmet(enum class EBrigandHelmetMeshes HelmetType);
	void ExecuteUbergraph_LightBrigandBase_PumpkinHead(int32 EntryPoint, enum class EBrigandHelmetMeshes K2Node_Event_HelmetType, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


