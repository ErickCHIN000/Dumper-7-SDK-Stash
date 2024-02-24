#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x368 - 0x358)
// BlueprintGeneratedClass BP_NewsFeedActor.BP_NewsFeedActor_C
class ABP_NewsFeedActor_C : public AGGNewsFeed
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NewsFeedActor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NewsFeedActor(int32 EntryPoint, const struct FFakeNews& K2Node_MakeStruct_FakeNews, const struct FFakeNews& K2Node_MakeStruct_FakeNews_1, const struct FFakeNews& K2Node_MakeStruct_FakeNews_2, const struct FFakeNews& K2Node_MakeStruct_FakeNews_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, const struct FFakeNews& K2Node_MakeStruct_FakeNews_4, int32 CallFunc_Array_Add_ReturnValue_4);
};

}


