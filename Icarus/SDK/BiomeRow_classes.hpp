#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass BiomeRow.BiomeRow_C
class UBiomeRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BiomeName;                                         // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBiomesRowHandle                      Biome;                                             // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBiomeRow_C* GetDefaultObj();

	void SetBiome(const struct FBiomesRowHandle& New_Biome);
	void ExecuteUbergraph_BiomeRow(int32 EntryPoint, const struct FBiomesRowHandle& K2Node_CustomEvent_New_Biome, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
};

}


