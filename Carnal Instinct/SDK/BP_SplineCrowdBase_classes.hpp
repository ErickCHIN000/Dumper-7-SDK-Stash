#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4C8 - 0x4B8)
// BlueprintGeneratedClass BP_SplineCrowdBase.BP_SplineCrowdBase_C
class ABP_SplineCrowdBase_C : public ACharacter
{
public:
	uint8                                        Pad_129F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UComp_SplineNPC_C*                     Comp_SplineNPC;                                    // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SplineCrowdBase_C* GetDefaultObj();

};

}


