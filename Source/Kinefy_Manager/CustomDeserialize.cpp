// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomDeserialize.h"

FString UCustomDeserialize::Custom_BytesToString(const TArray<uint8>& input)
{
	FString ResultString;
	FFileHelper::BufferToString(ResultString, input.GetData(), input.Num());
	return ResultString;
}
