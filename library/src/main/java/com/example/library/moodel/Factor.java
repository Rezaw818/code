package com.example.library.moodel;

import lombok.Getter;
import lombok.Setter;

import javax.persistence.Entity;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

@Entity
@Setter
@Getter
@Table(schema = SchemaName.SchemaName)
public class Factor extends BaseEntity {

    @ManyToOne
    @JoinColumn(name = "user_id")
    private User user;

}
