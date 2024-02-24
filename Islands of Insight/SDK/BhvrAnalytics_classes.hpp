#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BhvrAnalytics.BhvrAnalyticsBlueprintLibrary
class UBhvrAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBhvrAnalyticsBlueprintLibrary* GetDefaultObj();

	void RecordBhvrAnalyticsEventAttribute(class UStruct* AnyStruct);
};

// 0x20 (0x50 - 0x30)
// Class BhvrAnalytics.BhvrAnalyticsSubsystem
class UBhvrAnalyticsSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_2BA[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBhvrAnalyticsSubsystem* GetDefaultObj();

};

}


